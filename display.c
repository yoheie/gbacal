#include "color.h"
#include "display.h"

#define VIDEO_MODE_REG (*(volatile unsigned short *)0x04000000)
#define VIDEO_MODE_3 0x0F03

#define VRAM ((volatile unsigned short (*)[240])0x06000000)

void display_init(void)
{
	int x;
	int y;

	for (y = 0; y < DISPLAY_Y; y++) {
		for (x = 0; x < DISPLAY_X; x++) {
			VRAM[y][x] = COLOR_WHITE;
		}
	}

	VIDEO_MODE_REG = VIDEO_MODE_3;
}

void print_text(int line, int column, const char *text, unsigned short color)
{
	char c;
	int x;
	int y;
	int vram_x;
	int vram_y;

	while ((c = *text++) != '\0') {
		for (y = 0; y < FONT_Y; y++) {
			for (x = 0; x < FONT_X; x++) {
				vram_y = y + line * FONT_Y;
				vram_x = x + column * FONT_X;
				if ((font[c][y] & (0x80 >> x)) == 0) {
					VRAM[vram_y][vram_x] = COLOR_WHITE;
				}
				else {
					VRAM[vram_y][vram_x] = color;
				}
			}
		}
		if (++column >= COLUMNS) {
			column = 0;
			if (++line >= LINES) {
				line = 0;
			}
		}
	}
}

void fill(int x, int y, int width, int height, unsigned short color)
{
	int xofs;
	int yofs;
	for (yofs = 0; yofs < height; yofs++) {
		for (xofs = 0; xofs < width; xofs++) {
			VRAM[y + yofs][x + xofs] = color;
		}
	}
}

void display_image(int x, int y, int width, int height, const unsigned short *image)
{
	int xofs;
	int yofs;
	for (yofs = 0; yofs < height; yofs++) {
		for (xofs = 0; xofs < width; xofs++) {
			VRAM[y + yofs][x + xofs] = *image++;
		}
	}
}

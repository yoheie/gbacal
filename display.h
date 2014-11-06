#ifndef DISPLAY_H__
#define DISPLAY_H__

#include "font.h"

#define DISPLAY_X 240
#define DISPLAY_Y 160

#define COLUMNS (DISPLAY_X / FONT_X)
#define LINES   (DISPLAY_Y / FONT_Y)

void display_init(void);
void print_text(int line, int column, const char *text, unsigned short color);
void display_image(int x, int y, int width, int height, const unsigned short *image);

#endif /* DISPLAY_H__ */

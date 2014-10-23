#ifndef COLOR_H__
#define COLOR_H__


#define COLOR(r, g, b) (((r) << 0) | ((g) << 5) | ((b) << 10))

#define COLOR_BLACK COLOR(0x00, 0x00, 0x00)
#define COLOR_WHITE COLOR(0x1F, 0x1F, 0x1F)
#define COLOR_RED   COLOR(0x1F, 0x00, 0x00)
#define COLOR_GREEN COLOR(0x00, 0x1F, 0x00)
#define COLOR_BLUE  COLOR(0x00, 0x00, 0x1F)


#endif /* COLOR_H__ */

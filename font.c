#include "font.h"

const unsigned char font[0x80][FONT_Y] = {
	/* 0x00 - 0x1F */
	{ 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 },
	{ 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 },
	{ 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 },
	{ 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 },
	/* 0x20 ' ' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x21 '!' */
	{
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x00, /* |      | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x22 '"' */
	{
		0xD8, /* |** ** | */
		0x48, /* | *  * | */
		0x90, /* |*  *  | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x23 '#' */
	{
		0x28, /* |  * * | */
		0x28, /* |  * * | */
		0xF8, /* |***** | */
		0x50, /* | * *  | */
		0xF8, /* |***** | */
		0xA0, /* |* *   | */
		0xA0, /* |* *   | */
		0x00  /* |      | */
	},
	/* 0x24 '$' */
	{
		0x70, /* | ***  | */
		0xA8, /* |* * * | */
		0xA0, /* |* *   | */
		0x70, /* | ***  | */
		0x28, /* |  * * | */
		0xA8, /* |* * * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x25 '%' */
	{
		0xC8, /* |**  * | */
		0xC8, /* |**  * | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x98, /* |*  ** | */
		0x98, /* |*  ** | */
		0x00  /* |      | */
	},
	/* 0x26 '&' */
	{
		0x60, /* | **   | */
		0x90, /* |*  *  | */
		0x60, /* | **   | */
		0xA0, /* |* *   | */
		0x98, /* |*  ** | */
		0x90, /* |*  *  | */
		0xE8, /* |*** * | */
		0x00  /* |      | */
	},
	/* 0x27 ''' */
	{
		0x60, /* | **   | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x28 '(' */
	{
		0x08, /* |    * | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x10, /* |   *  | */
		0x08, /* |    * | */
		0x00  /* |      | */
	},
	/* 0x29 ')' */
	{
		0x80, /* |*     | */
		0x40, /* | *    | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x80, /* |*     | */
		0x00  /* |      | */
	},
	/* 0x2A '*' */
	{
		0x20, /* |  *   | */
		0xA8, /* |* * * | */
		0x70, /* | ***  | */
		0x20, /* |  *   | */
		0x70, /* | ***  | */
		0xA8, /* |* * * | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x2B '+' */
	{
		0x00, /* |      | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0xF8, /* |***** | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x2C ',' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x40, /* | *    | */
		0x80, /* |*     | */
		0x00  /* |      | */
	},
	/* 0x2D '-' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x70, /* | ***  | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x2E '.' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x40, /* | *    | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x2F '/' */
	{
		0x08, /* |    * | */
		0x08, /* |    * | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x00  /* |      | */
	},
	/* 0x30 '0' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x98, /* |*  ** | */
		0xA8, /* |* * * | */
		0xC8, /* |**  * | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x31 '1' */
	{
		0x20, /* |  *   | */
		0x60, /* | **   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x32 '2' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x08, /* |    * | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0xF8, /* |***** | */
		0x00  /* |      | */
	},
	/* 0x33 '3' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x08, /* |    * | */
		0x70, /* | ***  | */
		0x08, /* |    * | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x34 '4' */
	{
		0x50, /* | * *  | */
		0x50, /* | * *  | */
		0x90, /* |*  *  | */
		0x90, /* |*  *  | */
		0xF8, /* |***** | */
		0x10, /* |   *  | */
		0x10, /* |   *  | */
		0x00  /* |      | */
	},
	/* 0x35 '5' */
	{
		0xF8, /* |***** | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0xF0, /* |****  | */
		0x08, /* |    * | */
		0x08, /* |    * | */
		0xF0, /* |****  | */
		0x00  /* |      | */
	},
	/* 0x36 '6' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x80, /* |*     | */
		0xF0, /* |****  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x37 '7' */
	{
		0xF8, /* |***** | */
		0x88, /* |*   * | */
		0x10, /* |   *  | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x38 '8' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x39 '9' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x78, /* | **** | */
		0x08, /* |    * | */
		0x08, /* |    * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x3A ':' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x20, /* |  *   | */
		0x00, /* |      | */
		0x20, /* |  *   | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x3B ';' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x20, /* |  *   | */
		0x00, /* |      | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x3C '<' */
	{
		0x08, /* |    * | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x20, /* |  *   | */
		0x10, /* |   *  | */
		0x08, /* |    * | */
		0x00  /* |      | */
	},
	/* 0x3D '=' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x70, /* | ***  | */
		0x00, /* |      | */
		0x70, /* | ***  | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x3E '>' */
	{
		0x80, /* |*     | */
		0x40, /* | *    | */
		0x20, /* |  *   | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x80, /* |*     | */
		0x00  /* |      | */
	},
	/* 0x3F '?' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x00, /* |      | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x40 '@' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0xB8, /* |* *** | */
		0xA8, /* |* * * | */
		0xB8, /* |* *** | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x41 'A' */
	{
		0x20, /* |  *   | */
		0x50, /* | * *  | */
		0x50, /* | * *  | */
		0x88, /* |*   * | */
		0xF8, /* |***** | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x00  /* |      | */
	},
	/* 0x42 'B' */
	{
		0xF0, /* |****  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0xF0, /* |****  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0xF0, /* |****  | */
		0x00  /* |      | */
	},
	/* 0x43 'C' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x44 'D' */
	{
		0xF0, /* |****  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0xF0, /* |****  | */
		0x00  /* |      | */
	},
	/* 0x45 'E' */
	{
		0xF8, /* |***** | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0xF0, /* |****  | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0xF8, /* |***** | */
		0x00  /* |      | */
	},
	/* 0x46 'F' */
	{
		0xF8, /* |***** | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0xF0, /* |****  | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x00  /* |      | */
	},
	/* 0x47 'G' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x98, /* |*  ** | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x48 'H' */
	{
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0xF8, /* |***** | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x00  /* |      | */
	},
	/* 0x49 'I' */
	{
		0x70, /* | ***  | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x4A 'J' */
	{
		0x70, /* | ***  | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x00  /* |      | */
	},
	/* 0x4B 'K' */
	{
		0x88, /* |*   * | */
		0x90, /* |*  *  | */
		0xA0, /* |* *   | */
		0xC0, /* |**    | */
		0xA0, /* |* *   | */
		0x90, /* |*  *  | */
		0x88, /* |*   * | */
		0x00  /* |      | */
	},
	/* 0x4C 'L' */
	{
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0xF8, /* |***** | */
		0x00  /* |      | */
	},
	/* 0x4D 'M' */
	{
		0x88, /* |*   * | */
		0xD8, /* |** ** | */
		0xA8, /* |* * * | */
		0xA8, /* |* * * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x00  /* |      | */
	},
	/* 0x4E 'N' */
	{
		0x88, /* |*   * | */
		0xC8, /* |**  * | */
		0xC8, /* |**  * | */
		0xA8, /* |* * * | */
		0x98, /* |*  ** | */
		0x98, /* |*  ** | */
		0x88, /* |*   * | */
		0x00  /* |      | */
	},
	/* 0x4F 'O' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x50 'P' */
	{
		0xF0, /* |****  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0xF0, /* |****  | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x00  /* |      | */
	},
	/* 0x51 'Q' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0xA8, /* |* * * | */
		0x98, /* |*  ** | */
		0x78, /* | **** | */
		0x00  /* |      | */
	},
	/* 0x52 'R' */
	{
		0xF0, /* |****  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0xF0, /* |****  | */
		0xA0, /* |* *   | */
		0x90, /* |*  *  | */
		0x88, /* |*   * | */
		0x00  /* |      | */
	},
	/* 0x53 'S' */
	{
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x80, /* |*     | */
		0x70, /* | ***  | */
		0x08, /* |    * | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x54 'T' */
	{
		0xF8, /* |***** | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x55 'U' */
	{
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x56 'V' */
	{
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x50, /* | * *  | */
		0x50, /* | * *  | */
		0x50, /* | * *  | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x57 'W' */
	{
		0x88, /* |*   * | */
		0xA8, /* |* * * | */
		0xA8, /* |* * * | */
		0xA8, /* |* * * | */
		0xA8, /* |* * * | */
		0x50, /* | * *  | */
		0x50, /* | * *  | */
		0x00  /* |      | */
	},
	/* 0x58 'X' */
	{
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x50, /* | * *  | */
		0x20, /* |  *   | */
		0x50, /* | * *  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x00  /* |      | */
	},
	/* 0x59 'Y' */
	{
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x50, /* | * *  | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x5A 'Z' */
	{
		0xF8, /* |***** | */
		0x08, /* |    * | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x80, /* |*     | */
		0xF8, /* |***** | */
		0x00  /* |      | */
	},
	/* 0x5B '[' */
	{
		0x38, /* |  *** | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x38, /* |  *** | */
		0x00  /* |      | */
	},
	/* 0x5C '\' */
	{
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x40, /* | *    | */
		0x20, /* |  *   | */
		0x10, /* |   *  | */
		0x08, /* |    * | */
		0x08, /* |    * | */
		0x00  /* |      | */
	},
	/* 0x5D ']' */
	{
		0xE0, /* |***   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0xE0, /* |***   | */
		0x00  /* |      | */
	},
	/* 0x5E '^' */
	{
		0x20, /* |  *   | */
		0x50, /* | * *  | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x5F '_' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x60 '`' */
	{
		0x30, /* |  **  | */
		0x20, /* |  *   | */
		0x10, /* |   *  | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x61 'a' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x68, /* | ** * | */
		0x98, /* |*  ** | */
		0x88, /* |*   * | */
		0x98, /* |*  ** | */
		0x68, /* | ** * | */
		0x00  /* |      | */
	},
	/* 0x62 'b' */
	{
		0x80, /* |*     | */
		0x80, /* |*     | */
		0xB0, /* |* **  | */
		0xC8, /* |**  * | */
		0x88, /* |*   * | */
		0xC8, /* |**  * | */
		0xB0, /* |* **  | */
		0x00  /* |      | */
	},
	/* 0x63 'c' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x80, /* |*     | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x64 'd' */
	{
		0x08, /* |    * | */
		0x08, /* |    * | */
		0x68, /* | ** * | */
		0x98, /* |*  ** | */
		0x88, /* |*   * | */
		0x98, /* |*  ** | */
		0x68, /* | ** * | */
		0x00  /* |      | */
	},
	/* 0x65 'e' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0xF8, /* |***** | */
		0x80, /* |*     | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x66 'f' */
	{
		0x18, /* |   ** | */
		0x20, /* |  *   | */
		0xF8, /* |***** | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x67 'g' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x78, /* | **** | */
		0x88, /* |*   * | */
		0x78, /* | **** | */
		0x08, /* |    * | */
		0xF0, /* |****  | */
		0x00  /* |      | */
	},
	/* 0x68 'h' */
	{
		0x80, /* |*     | */
		0x80, /* |*     | */
		0xB0, /* |* **  | */
		0xC8, /* |**  * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x00  /* |      | */
	},
	/* 0x69 'i' */
	{
		0x20, /* |  *   | */
		0x00, /* |      | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x6A 'j' */
	{
		0x20, /* |  *   | */
		0x00, /* |      | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x00  /* |      | */
	},
	/* 0x6B 'k' */
	{
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x90, /* |*  *  | */
		0xA0, /* |* *   | */
		0xC0, /* |**    | */
		0xA0, /* |* *   | */
		0x90, /* |*  *  | */
		0x00  /* |      | */
	},
	/* 0x6C 'l' */
	{
		0x40, /* | *    | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x6D 'm' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0xD0, /* |** *  | */
		0xA8, /* |* * * | */
		0xA8, /* |* * * | */
		0xA8, /* |* * * | */
		0xA8, /* |* * * | */
		0x00  /* |      | */
	},
	/* 0x6E 'n' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0xB0, /* |* **  | */
		0xC8, /* |**  * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x00  /* |      | */
	},
	/* 0x6F 'o' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x70, /* | ***  | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x70, /* | ***  | */
		0x00  /* |      | */
	},
	/* 0x70 'p' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0xB0, /* |* **  | */
		0xC8, /* |**  * | */
		0xC8, /* |**  * | */
		0xB0, /* |* **  | */
		0x80, /* |*     | */
		0x00  /* |      | */
	},
	/* 0x71 'q' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x68, /* | ** * | */
		0x98, /* |*  ** | */
		0x98, /* |*  ** | */
		0x68, /* | ** * | */
		0x08, /* |    * | */
		0x00  /* |      | */
	},
	/* 0x72 'r' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0xB8, /* |* *** | */
		0xC0, /* |**    | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x80, /* |*     | */
		0x00  /* |      | */
	},
	/* 0x73 's' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x78, /* | **** | */
		0x80, /* |*     | */
		0x70, /* | ***  | */
		0x08, /* |    * | */
		0xF0, /* |****  | */
		0x00  /* |      | */
	},
	/* 0x74 't' */
	{
		0x00, /* |      | */
		0x20, /* |  *   | */
		0xF8, /* |***** | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x18, /* |   ** | */
		0x00  /* |      | */
	},
	/* 0x75 'u' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x98, /* |*  ** | */
		0x68, /* | ** * | */
		0x00  /* |      | */
	},
	/* 0x76 'v' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x50, /* | * *  | */
		0x50, /* | * *  | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x77 'w' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x88, /* |*   * | */
		0xA8, /* |* * * | */
		0xA8, /* |* * * | */
		0x50, /* | * *  | */
		0x50, /* | * *  | */
		0x00  /* |      | */
	},
	/* 0x78 'x' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x88, /* |*   * | */
		0x50, /* | * *  | */
		0x20, /* |  *   | */
		0x50, /* | * *  | */
		0x88, /* |*   * | */
		0x00  /* |      | */
	},
	/* 0x79 'y' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0x88, /* |*   * | */
		0x88, /* |*   * | */
		0x50, /* | * *  | */
		0x20, /* |  *   | */
		0xC0, /* |**    | */
		0x00  /* |      | */
	},
	/* 0x7A 'z' */
	{
		0x00, /* |      | */
		0x00, /* |      | */
		0xF8, /* |***** | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0xF8, /* |***** | */
		0x00  /* |      | */
	},
	/* 0x7B '{' */
	{
		0x18, /* |   ** | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x40, /* | *    | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x18, /* |   ** | */
		0x00  /* |      | */
	},
	/* 0x7C '|' */
	{
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x00  /* |      | */
	},
	/* 0x7D '}' */
	{
		0xC0, /* |**    | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0x10, /* |   *  | */
		0x20, /* |  *   | */
		0x20, /* |  *   | */
		0xC0, /* |**    | */
		0x00  /* |      | */
	},
	/* 0x7E '~' */
	{
		0x50, /* | * *  | */
		0xA0, /* |* *   | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00, /* |      | */
		0x00  /* |      | */
	},
	/* 0x7F */
	{ 0 }
};

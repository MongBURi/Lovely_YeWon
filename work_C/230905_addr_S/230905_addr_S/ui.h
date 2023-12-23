#pragma once

typedef enum {
	NOCURSOR,
	SOLID_CURSOR,
	NORMAL_CURSOR
} CURSOR_TYPE;

typedef enum {
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	PURPLE,
	YELLOW,
	WHITE,
	GRAY,
	LIGTH_BLUE,
	LIGTH_GREEN,
	LIGTH_CYAN,
	LIGTH_RED,
	LIGTH_PURPLE,
	LIGTH_YELLOW,
	LIGTH_GREY
} FONT_COLOR;

extern void title();
extern void gotoxy(int x, int y);
extern void set_cursor_type(CURSOR_TYPE type);
extern void font_color(FONT_COLOR color);
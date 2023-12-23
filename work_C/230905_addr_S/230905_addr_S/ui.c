#include <stdio.h>
#include <windows.h>
#include "ui.h"

void title()
{
	int x = 5;
	int y = 3;
	gotoxy(x, y + 0); printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
	gotoxy(x, y + 1); printf("┃                                                         ┃");
	gotoxy(x, y + 2); printf("┃                                                         ┃");
	gotoxy(x, y + 3); printf("┃                                                         ┃");
	gotoxy(x, y + 4); printf("┃                                                         ┃");
	gotoxy(x, y + 5); printf("┃                                                         ┃");
	gotoxy(x, y + 6); printf("┃                                                         ┃");
	gotoxy(x, y + 7); printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
	gotoxy(x + 16, y + 2); printf("주소록 관리 프로그램 v1.5");
	gotoxy(x + 33, y + 4); printf("개발날짜	: 2023.09.01");
	gotoxy(x + 33, y + 5); printf("개발자	: 신예원");
	gotoxy(x + 10, y + 11); printf("메뉴화면 이동은 아무키나 눌러주세요^-^!");
}

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void set_cursor_type(CURSOR_TYPE type)
{
	CONSOLE_CURSOR_INFO info = { 0 };
	switch (type) {
	case NOCURSOR:
		info.dwSize = 1;
		info.bVisible = FALSE;
		break;
	case SOLID_CURSOR:
		info.dwSize = 100;
		info.bVisible = TRUE;
		break;
	case NORMAL_CURSOR:
		info.dwSize = 20;
		info.bVisible = TRUE;
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void font_color(FONT_COLOR color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
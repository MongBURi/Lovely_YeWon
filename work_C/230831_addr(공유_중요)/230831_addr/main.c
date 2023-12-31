// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()

#include <windows.h>// win32 api 사용 / C언어 표준은 아님 / 윈도우 운영체제에서 사용 가능한 C프로그램
#include <conio.h>	// 콘솔(검은화면) 인풋 아웃풋

#define RAND_SIZE 10	// 배열의 크기 → 전처리기 / 숫자,문자,문자열도 가능

// define NOCURSOR 0		→ define(로레벨): 시스템 프로그래밍, 하드웨어 쪽에서 많이 사용
// define SOLID_CURSOR 1	// enum을 쓰거나 define 씀.(개인 취향)
// define NORMAL_CURSOR 2	// const, enum > 상수변수(고정값)

typedef enum {		// 이넘(표준C): ex)값2 부여하면 뒤에는 자동으로 3,4가 부여 됨.
	NOCURSOR,		// 커서 없앰		/ 값 지정 안 하면 자동으로 0이 부여가 됨 / 마음대로 이름 지음
	SOLID_CURSOR,	// solid 형태	/ 1 부여
	NORMAL_CURSOR	// 일반 형태		/ 2 부여
} CURSOR_TYPE;

typedef enum {
	BLACK,		// 0
	BLUE,		// 1
	GREEN,		// 2
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
	LIGTH_GREY	// 15	
} FONT_COLOR;

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
} ADDR;

const int id[] = { 111, 222, 333, 444, 555 };
const char* name[] = { "홍길동", "전우치", "강감찬", "유관순", "이순신" };
const char* tel[] = { "010-1234-1234", "010-1234-1111", "010-1234-2222",
	"010-1234-3333", "010-1234-4444" };
const char* addr[] = { "대구 동구 신암4동", "서울 동구 신암4동" ,
	"광주 동구 신암4동", 	"대전 동구 신암4동", "부산 동구 신암4동" };
const char* email[] = { "hong@naver.com", "joen@kakao.com",
	"kang@gmail.com", "yu@msn.com", "lee@daum.net" };

// 함수 정의 프로토타입
int main_menu();
void title();
void gotoxy(int x, int y);
void set_cursor_type(CURSOR_TYPE type);
void font_color(FONT_COLOR color);
void file_write_rand(ADDR ad[], char filename[], int len);
void file_write(ADDR ad, char filename[]);
void file_read(char filename[]);
void file_del_all(char filename[]);
void file_search(char filename[], char in_name[]);

int main()
{
	char file[] = "address.bin";
	srand(time(NULL));
	set_cursor_type(NOCURSOR);
	font_color(LIGTH_YELLOW);
	title();
	_getch();	// 아무 문자 하나 입력받는(scanf()와 비슷) 대기 상태.

	system("cls");
	font_color(WHITE);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {	// case1,2,3도 enum이나 #define으로 씀(실전)
		case 1:
		{
			ADDR ad[RAND_SIZE] = { 0 };	// []안에 일반변수 쓸 수 없다. enum도 불가능: ex)[BLACK]
			int len = sizeof(ad) / sizeof(ADDR);	// sizeof(ad) == ADDRx5: 5덩어리를 1덩어리로 나누면 5
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}

			file_write_rand(ad, file, len);
			printf("랜덤 데이터를 생성중입니다…\n");
			Sleep(2000);	// 하드웨어간의 간섭이 발생하기 때문에 미세한 딜레이 필요.
			system("pause");// (sec(1초) - ms(2000/sec=2초) - us - ns)
			break;
		}
		case 2:
		{
			ADDR ad = { 0 };
			printf("ID: ");
			scanf("%d", &ad.id);
			printf("이름: ");
			scanf("%s", ad.name);
			printf("전화: ");
			scanf("%s", ad.tel);
			printf("주소: ");
			getchar();
			gets(ad.addr);
			printf("Email: ");
			scanf("%s", ad.email);

			file_write(ad, file);
			printf("랜덤 데이터를 입력중입니다…\n");
			Sleep(1000);
			system("pause");
			break;
		}
		case 3:
			file_del_all(file);
			printf("전체 데이터를 삭제중입니다\n");
			Sleep(2000);
			system("pause");
			break;
		case 4:
			file_read(file);
			system("pause");
			break;
		case 5:	// 검색(이름)
		{			
			char in_name[20] = { 0 };
			printf("이름 검색: ");
			scanf("%s", in_name);
			file_search(file, in_name);
			system("pause");
			break;
		}
		case 6:	// 삭제
			break;
		case 7:	// 수정
			break;
		case 8:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!!\n");
		}
		system("cls");
	}

}

int main_menu()
{
	printf("=============================\n");
	printf("주소록 관리 프로그램 v1.0\n");
	printf("-----------------------------\n");
	printf("1.주소록 자동 생성\n");
	printf("2.주소록 직접 입력\n");
	printf("3.주소록 전체 삭제\n");
	printf("4.주소록 보기\n");
	printf("5.주소록 검색하기\n");	// 보기-(비슷)-검색
	printf("6.주소록 삭제하기\n");	// 삭제-(비슷)-수정
	printf("7.주소록 수정하기\n");
	printf("8.종료\n");
	printf("=============================\n");
	printf("메뉴 선택:");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void title()	// 1~3초 사이가 적당
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
// ┏ 커서 이동 좌표
void gotoxy(int x, int y)
{
	COORD pos = { x, y };	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);	// 표준C함수 아님 win32운영체제에서 사용하는 애
}
// ┏ 커서 타입을 설정
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
// ┏ 폰트에 색상 적용
void font_color(FONT_COLOR color)
{	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void file_write_rand(ADDR ad[], char filename[], int len)
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패\n");
		return;
	}

	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}

void file_write(ADDR ad, char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_read(char filename[])
{
	// 데이터가 없으면 "데이터가 존재하지 않습니다" 에러 메시지를 출력하시오
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 실패!\n");
		return;
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;	// while문을 수행하지 않으면 그대로0, 수행하면 1로 바뀜
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		printf("%d번 주소록\n", count++);
		printf("ID: %d\n", ad.id);
		printf("이름: %s\n", ad.name);
		printf("전화: %s\n", ad.tel);
		printf("주소: %s\n", ad.addr);
		printf("Email: %s\n", ad.email);
		printf("\n");
		check = 1;
	}
	/*if (fread(&ad, sizeof(ad), 1, fp) != 1) {
		printf("데이터가 존재하지 않습니다.\n");
	}*/
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_del_all(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("파일 삭제 실패!\n");
		exit(0);
	}
	fclose(fp);
}

void file_search(char filename[], char in_name[])
{
	// 이름으로 검색	
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 실패!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (strcmp(ad.name, in_name) == 0) {
			printf("%d번 주소록\n", count++);
			printf("ID: %d\n", ad.id);
			printf("이름: %s\n", ad.name);
			printf("전화: %s\n", ad.tel);
			printf("주소: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}
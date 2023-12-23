#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "menu.h"	// 내가 만든 헤더파일은 ""(쌍따움표)써야 됨.
					// menu.c와 menu.h는 동일한 폴더에 존재한다는 뜻. ex) "app/menu.h"이상한 경로
int main_menu()
{
	printf("=============================\n");
	printf("주소록 관리 프로그램 v1.0\n");
	printf("-----------------------------\n");
	printf("1.주소록 자동 생성\n");
	printf("2.주소록 직접 입력\n");
	printf("3.주소록 전체 삭제\n");
	printf("4.주소록 보기\n");
	printf("5.주소록 검색하기\n");	// 검색: 전화,이메일 (서브메뉴)
	printf("6.주소록 삭제하기\n");
	printf("7.주소록 수정하기\n");
	printf("8.종료\n");
	printf("=============================\n");
	printf("메뉴 선택:");
	int menu;
	scanf("%d", &menu);
	return menu;
}

int search_menu()
{
	printf("=============================\n");
	printf("데이터 검색\n");
	printf("-----------------------------\n");
	printf("1.이름 검색하기.\n");
	printf("2.아이디 검색하기.\n");
	printf("3.이메일 검색하기.\n");
	printf("4.메인 메뉴 되돌아가기\n");	
	printf("=============================\n");
	printf("메뉴 선택:");
	int menu;
	scanf("%d", &menu);
	return menu;
}
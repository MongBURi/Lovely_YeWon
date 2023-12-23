#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_menu();
void gugu(int menu);

int main()
{
	/*
	문제2)	------------------------------
			구구단을 출력하는 함수 연습 v1.0
			------------------------------
			1. 구구단 짝수단 출력(2~8)
			2. 구구단 홀수단 출력(3~9)
			3. 구구단 전체 출력(2~9)
			4. 종료
			------------------------------
			메뉴 선택:	*/

	while (1) {				
		int menu = main_menu();		
		switch (menu) {
		case 1:
			gugu(menu); break;
		case 2:
			gugu(menu); break;
		case 3:
			gugu(menu); break;
		case 4:
			printf("프로그램을 종료합니다.\n"); exit(0);
		default:
			printf("잘못된 메뉴 입력!\n"); break;
		}
	}
}

int main_menu()
{
	printf("------------------------------\n");
	printf("구구단을 출력하는 함수 연습 v1.0\n");
	printf("------------------------------\n");
	printf("1. 구구단 짝수단 출력(2~8)\n");
	printf("2. 구구단 홀수단 출력(3~9)\n");
	printf("3. 구구단 전체 출력(2~9)\n");
	printf("4. 종료\n");
	printf("------------------------------\n");
	printf("메뉴 선택: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}
void gugu(int menu)
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (menu == 1 && j % 2 == 0) {
				printf("%d x %d = %d\t", j, i, j * i);
			}				
			else if (menu == 2 && j % 2 != 0) {
				printf("%d x %d = %d\t", j, i, j * i);
			}				
			else if (menu == 3) {
				printf("%d x %d = %d\t", j, i, j * i);
			}				
		}
		printf("\n");
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 전역벽수: 함수 밖에서 선언되는 변수. (모든 함수에 값을 전달할 수 있음)
// 지역변수: 함수 안에서만 사용 가능한 변수.
const char CHECK_FULL = 'f'; // 프로그램 종료될 때까지 'f'이외의 값을 가질 수 없다.
// #define CHECK_FULL = 'f' → 이렇게 표현하기도 한다. (선생님 방법)
const char CHECK_EVEN = 'e';
const char CHECK_ODD = 'o';

int main_menu();
void gugu(char n);

int main()
{
	while (1) {
		int menu = main_menu();
		switch (menu) {
		case 1:
			gugu(CHECK_EVEN); break;
		case 2:
			gugu(CHECK_ODD); break;
		case 3:
			gugu(CHECK_FULL); break;
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

void gugu(char n)
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (j % 2 == 0 && CHECK_EVEN == n) {
				printf("%d x %d = %d\t", j, i, j * i);
			}
			else if (j % 2 != 0 && CHECK_ODD == n) {
				printf("%d x %d = %d\t", j, i, j * i);
			}
			else if (CHECK_FULL == n) {
				printf("%d x %d = %d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}
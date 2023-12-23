#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct car {
	char name[20];
};

struct manager {
	char name[20];
};

struct customer {
	char name[20];
	struct car ca;
	struct manager ma;
};

char* name[] = { "일예원", "이예원", "삼예원", "사예원", "오예원" };
char* ca_name[] = { "부릉부릉", "띠띠빵빵", "따릉따릉", "덜컹덜컹", "삐그드덕" };
char* ma_name[] = { "일상신", "이상신", "삼상신", "사상신", "오상신" };

int main_menu();
void cust_in(struct customer in[]);
void cust_ran(struct customer in[]);
void show_cust(struct customer out[]);

int main()
{
	/*	문제)	고객 이름, 차량 모델, 매니저명
				-------------------------
				고객 차량 관리 프로그램 v1.6
				-------------------------
				1. 고객 정보 직접 입력. → scanf()
				2. 고객 정보 랜덤 입력.
				3. 고객 정보 보기.
				4. 종료.
				-------------------------
				메뉴 선택:	*/

	srand(time(NULL));
	struct customer cu[5] = { 0 };

	while (1) {
		switch (main_menu()) {
		case 1:
			cust_in(cu);	break;
		case 2:
			cust_ran(cu);	break;
		case 3:
			show_cust(cu);	break;
		case 4:
			printf("앱을 종료합니다.\n");
			exit(0);
		default:
			printf("잘못된 메뉴를 선택하셨습니다.\n");
		}
	}
}

int main_menu()
{
	printf("-------------------------\n");
	printf("고객 차량 관리 프로그램 v1.6\n");
	printf("-------------------------\n");
	printf("1. 고객 정보 직접 입력.\n");
	printf("2. 고객 정보 랜덤 입력.\n");
	printf("3. 고객 정보 보기.\n");
	printf("4. 종료.\n");
	printf("-------------------------\n");
	printf("메뉴 선택: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}
void cust_in(struct customer in[])
{
	printf("고객 성함: ");
	scanf("%s", &in[0].name);
	printf("차량명: ");
	scanf("%s", &in[0].ca.name);
	printf("매니저명: ");
	scanf("%s", &in[0].ma.name);
	printf("\n");
	printf("고객 정보가 수동으로 입력되었습니다.\n");
}
void cust_ran(struct customer in[])
{
	for (int i = 0; i < 5; i++) {
		strcpy(in[i].name, name[rand() % 5]);
		strcpy(in[i].ca.name, ca_name[rand() % 5]);
		strcpy(in[i].ma.name, ma_name[rand() % 5]);
	}
	printf("고객 정보가 랜덤으로 입력되었습니다.\n");
}
void show_cust(struct customer out[])
{
	for (int i = 0; i < 5; i++) {
		if (strcmp(out[i].name, "") == 0) {		// out[i].name의 값이 ""과 같다면
			break;
		}
		printf("%d번 고객 이름: %s\n", i + 1, out[i].name);
		printf("%d번 고객 차량명: %s\n", i + 1, out[i].ca.name);
		printf("%d번 고객 매니저: %s\n", i + 1, out[i].ma.name);
		printf("\n");
	}
}
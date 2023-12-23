#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct car {
	char name[20];		// 모델명
	int price;			// 가격
	int year;			// 연식
	char color[20];		// 색상
	char office[100];	// 영업소
};

struct client {
	char name[20];		// 고객명
	char tel[20];		// 전화번호
	char addr[100];		// 주소
	char job[20];		// 직업
	char birth[20];		// 생일
	struct car choice;	// 구매차량	// DB의 관계형, 고객정보만 찾으면 자동차 정보도 확인 가능.
};

// 전역변수, 모든 함수에 영향을 준다.
char* name[3] = { "일예원", "이예원", "삼예원" };
char* tel[3] = { "010-1234-0001", "010-1234-0001", "010-1234-0001" };
char* addr[3] = { "달나라", "꿈나라", "햇나라" };
char* job[3] = { "학생", "선생님", "상담사" };
char* birth[3] = { "5월5일", "11월11일", "12월25일" };
char* cname[3] = { "빵빵이", "부릉이", "따릉이" };
char* color[3] = { "핑크", "보라", "민트" };
char* office[3] = { "바닷마을", "앞산", "뒷동산" };
int price[3] = { 10000, 200000, 3000000 };
int year[3] = { 2000, 2010, 2020 };

int menu();
void ins_customer(struct client in[]);
void show_customer(struct client out[]);

int main()
{
	/*	ex)	-------------------------
			고객 차량 관리 프로그램 v1.5
			-------------------------
			1. 고객 및 구매차량 입력.
			2. 고객 및 구매차량 보기.
			3. 종료.
			-------------------------
			메뉴 선택:	*/
	
	srand(time(NULL));	// 랜덤 함수를 사용하기 위한 필수 조건.
	struct client cl_arr[100] = { 0 };	// 구조체 이름(=데이터 타임)
	
	while (1) {
		switch (menu()) {
		case 1:
			ins_customer(cl_arr);	break;
		case 2:
			show_customer(cl_arr);	break;
		case 3:
			printf("앱을 종료합니다.\n");
			exit(0);
		default:
			printf("잘못된 메뉴를 선택하셨습니다.\n");
			printf("다시 입력하세요.\n");
		}		
	}
}

int menu()
{
	printf("-------------------------\n");
	printf("고객 차량 관리 프로그램 v1.5\n");
	printf("-------------------------\n");
	printf("1. 고객 및 구매차량 입력.\n");
	printf("2. 고객 및 구매차량 보기.	\n");
	printf("3. 종료\n");
	printf("-------------------------\n");
	printf("메뉴 선택: \n");
	int menu;
	scanf("%d", &menu);
	return menu;
}
void ins_customer(struct client in[])
{
	for (int i = 0; i < 100; i++) {
		strcpy(in[i].name, name[rand() % 3]);
		strcpy(in[i].tel, tel[rand() % 3]);
		strcpy(in[i].addr, addr[rand() % 3]);
		strcpy(in[i].job, job[rand() % 3]);
		strcpy(in[i].birth, birth[rand() % 3]);
		strcpy(in[i].choice.name, cname[rand() % 3]);
		strcpy(in[i].choice.color, color[rand() % 3]);
		strcpy(in[i].choice.office, office[rand() % 3]);
		in[i].choice.price = price[rand() % 3];
		in[i].choice.year = year[rand() % 3];
	}
	printf("정상적으로 입력 되었습니다.\n");
}
void show_customer(struct client out[])
{
	for (int i = 0; i < 100; i++) {
		printf("번호: %d\n", i + 1);
		printf("고객명: %s\n", out[i].name);
		printf("전화번호: %s\n", out[i].tel);
		printf("주소: %s\n", out[i].addr);
		printf("직업: %s\n", out[i].job);
		printf("생일: %s\n", out[i].birth);
		printf("차량명: %s\n", out[i].choice.name);
		printf("가격: %d\n", out[i].choice.price);
		printf("연식: %d\n", out[i].choice.year);
		printf("색상: %s\n", out[i].choice.color);
		printf("영업소: %s\n", out[i].choice.office);
		printf("\n");
	}
}
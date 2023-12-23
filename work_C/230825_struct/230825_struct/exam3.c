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
	struct car choice;	// 구매차량
};

int main()
{
	/*	문제3)	< 차량 고객 관리 프로그램 v1.0 >
				1. 고객 정보, 차량 정보 구조체 → (클래스로 확장)
				2. 고객: 이름, 전화번호, 주소, 직업, 생일
				3. 차량: 모델명, 가격, 연식, 색상, 영업소
				4. 10명의 고객 정보를 배열에서 랜덤하게 추출하여 입력 및 출력.	*/
	
	// 고객 정보
	char* name[3] = { "일예원", "이예원", "삼예원" };
	char* tel[3] = { "010-1234-0001", "010-1234-0001", "010-1234-0001" };
	char* addr[3] = { "달나라", "꿈나라", "햇나라" };
	char* job[3] = { "학생", "선생님", "상담사" };
	char* birth[3] = { "5월5일", "11월11일", "12월25일" };
	// 차량 정보
	char* cname[3] = { "빵빵이", "부릉이", "따릉이" };
	char* color[3] = { "핑크", "보라", "민트" };
	char* office[3] = { "바닷마을", "앞산", "뒷동산" };
	int price[3] = { 10000, 200000, 3000000 };
	int year[3] = { 2000, 2010, 2020 };

	struct client cl_arr[10] = { 0 };	
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		strcpy(cl_arr[i].name, name[rand() % 3]);
		strcpy(cl_arr[i].tel, tel[rand() % 3]);
		strcpy(cl_arr[i].addr, addr[rand() % 3]);
		strcpy(cl_arr[i].job, job[rand() % 3]);
		strcpy(cl_arr[i].birth, birth[rand() % 3]);
		strcpy(cl_arr[i].choice.name, cname[rand() % 3]);
		strcpy(cl_arr[i].choice.color, color[rand() % 3]);
		strcpy(cl_arr[i].choice.office, office[rand() % 3]);
		cl_arr[i].choice.price = price[rand() % 3];
		cl_arr[i].choice.year = year[rand() % 3];
	}

	for (int i = 0; i < 10; i++) {
		printf(">>> %s 님의 고객 정보 <<<\n", cl_arr[i].name);
		printf("전화번호: %s\n", cl_arr[i].tel);
		printf("주소: %s\n", cl_arr[i].addr);
		printf("직업: %s\n", cl_arr[i].job);
		printf("생일: %s\n", cl_arr[i].birth);
		printf("차량명: %s\n", cl_arr[i].choice.name);
		printf("가격: %d\n", cl_arr[i].choice.price);
		printf("연식: %d\n", cl_arr[i].choice.year);
		printf("색상: %s\n", cl_arr[i].choice.color);
		printf("영업소: %s\n", cl_arr[i].choice.office);
		printf("\n");
	}	
}
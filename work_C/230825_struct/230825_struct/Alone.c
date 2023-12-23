#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct professor {
	char name[20];
	char major[20];
	int age;
};

struct student {
	char name[20];
	char tel[20];
	int age;
	char addr[100];
	struct professor pro;
};

int main()
{
	/*	문제)	1. 학생 정보 구조체 만들기
				2. 학생 정보는 이름, 휴대폰번호, 나이, 주소가 있음.
				3. 100명의 학생 정보를 랜덤하게 저장하여 출력.
				4. 랜덤값은 배열에 값을 저장하고 랜덤하게 불러오게 처리.		*/

	char* name[5] = { "일예원", "이예원", "삼예원", "사예원", "오예원" };
	char* tel[5] = { "010-1234-0001", "010-1234-0002", "010-1234-0003", "010-1234-0004", "010-1234-0005" };
	int age[5] = { 10,20,30,40,50 };
	char* addr[5] = { "서울", "경기도", "충청도", "전라도", "경상도" };
	
	struct student arr[100] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		strcpy(arr[i].name, name[rand() % 5]);
		strcpy(arr[i].tel, tel[rand() % 5]);
		arr[i].age = age[rand() % 5];
		strcpy(arr[i].addr, addr[rand() % 5]);		
	}

	for (int i = 0; i < 100; i++) {
		printf("%d번째 학생 정보\n", i + 1);
		printf("이름: %s\n", arr[i].name);
		printf("번호: %s\n", arr[i].tel);
		printf("나이: %d\n", arr[i].age);
		printf("주소: %s\n", arr[i].addr);
		printf("--------------------\n");
	}

	arr[0].pro.age = 30;
	strcpy(arr[0].pro.name, "박교수");
	printf("%s 학생의 담당 교수:%c\n", arr[0].name, arr[0].pro.name);

}
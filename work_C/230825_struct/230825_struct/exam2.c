#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct profrssor {	// 학생 담당 교수
	char name[20];	// 교수명
	char major[20];	// 전공과목
	int age;		// 교수나이
};

struct student {
	char name[20];	// 학생명
	char tel[20];	// 전화번호
	int age;		// 학생나이
	char addr[100];	// 주소
	struct profrssor pro;	// 담당교수	// 교수 정보가 위에 있어야 참조 가능
};

int main()
{
	/*	문제)	1. 학생 정보 구조체 만들기
				2. 학생 정보는 이름, 휴대폰번호, 나이, 주소가 있음.
				3. 100명의 학생 정보를 랜덤하게 저장하여 출력.
				4. 랜덤값은 배열에 값을 저장하고 랜덤하게 불러오게 처리.		*/
				/*	ex)
				struct student st;
				strcpy(st.name, name[2]);
				printf("st.name:%s\n", st.name);	*/

	char* name[5] = { "일예원", "이예원", "삼예원", "사예원", "오예원" };	
	char* tel[5] = { "010-1234-0001", "010-1234-0002", "010-1234-0003",
		"010-1234-0004", "010-1234-0005" };
	int age[5] = { 10,20,30,40,50 };
	char* addr[5] = { "서울", "경기도", "충청도", "전라도", "경상도" };
 	
	struct student st[100] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		strcpy(st[i].name, name[rand() % 5]);
		strcpy(st[i].tel, tel[rand() % 5]);
		strcpy(st[i].addr, addr[rand() % 5]);
		st[i].age = age[rand() % 5];
	}

	for (int i = 0; i < 100; i++) {
		printf(">>> %d번째 학생점수 <<<\n", i + 1);
		printf("이름:%s\n", st[i].name);
		printf("번호:%s\n", st[i].tel);
		printf("주소:%s\n", st[i].addr);
		printf("나이:%d\n", st[i].age);
		printf("-------------------------\n");
	}

	st[0].pro.age = 50;	// 첫 번째 학생의 담당교수 나이.
	strcpy(st[0].pro.name, "박교수");	// 첫 번째 학생의 담당교수 이름.
	printf("%s 학생의 담당 교수:%s\n", st[0].name, st[0].pro.name);
	
}
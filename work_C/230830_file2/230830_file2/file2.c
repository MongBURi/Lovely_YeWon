#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct _PERSON {
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} PERSON;

int main()
{
	PERSON son[2] = {
		{ "달예원2", 10, "010-1234-0001", "달나라 토끼마을2" },
		{ "꿈예원2", 20, "010-5678-0002", "꿈나라 어느마을2" }
	};

	// 파일 쓰기
	FILE* fp = fopen("person_arr.bin", "wb");
	if (fp == NULL) {
		printf("파일 쓰기 오픈 에러!\n");
		return -1;
	}
	fwrite(&son[0], sizeof(PERSON), 1, fp);	// &son[0] == son
	fwrite(&son[1], sizeof(son[1]), 1, fp);	// &son[1] == son + 1
	printf("파일에 정상적으로 저장되었습니다.\n");
	fclose(fp);

	// 파일 읽기
	FILE* fp3 = fopen("person_arr.bin", "rb");
	if (fp3 == NULL) {
		printf("파일 읽기 오픈 에러!\n");
		return -1;
	}
	PERSON temp3 = { 0 };
	while (fread(&temp3, sizeof(temp3), 1, fp3) == 1) {
		printf("이름:%s 나이:%d 전화:%s 주소:%s\n", temp3.name, temp3.age, temp3.tel, temp3.addr);
	}
	fclose(fp3);
}
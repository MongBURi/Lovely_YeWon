#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct _PERSON {	// 아무런 의미 없음.
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} PERSON;	// 구조체 정의의 이름.

int main()
{
	PERSON son1 = { "달예원", 10, "010-1234-0001", "달나라 토끼마을" };
	PERSON son2 = { "꿈예원", 20, "010-5678-0002", "꿈나라 어느마을" };

	// 파일 쓰기.
	FILE* fp = fopen("person.bin", "wb");
	if (fp == NULL) {
		printf("파일 쓰기 오픈 에러!\n");
		return -1;	// 관례적으로 '0'을 success(성공)코드로 봄. '-1' 오류로 봄. 
	}
	fwrite(&son1, sizeof(son1), 1, fp); // sizeof(son1) == sizeof(PERSON)
	fwrite(&son2, sizeof(son2), 1, fp);
	printf("파일에 정상적으로 저장되었습니다.\n");
	fclose(fp);

	// 파일 읽기 방법 1.
	/*FILE* fp2 = fopen("person.bin", "rb");
	if (fp2 == NULL) {
		printf("파일 읽기 오픈 에러!\n");
		return -1;
	}
	PERSON temp = { 0 };	// 파일에서 구조체 정보를 읽어 저장하는 빈 구조체.
	fread(&temp, sizeof(temp), 1, fp2);
	printf("이름:%s 나이:%d 전화:%s 주소:%s\n", temp.name, temp.age, temp.tel, temp.addr);
	fread(&temp, sizeof(temp), 1, fp2);
	printf("이름:%s 나이:%d 전화:%s 주소:%s\n", temp.name, temp.age, temp.tel, temp.addr);
	fclose(fp2);	*/

	// 파일 읽기 방법 2.
	FILE* fp3 = fopen("person.bin", "rb");	// 읽기 위해서는 파일이 이미 있어야 함.
	if (fp3 == NULL) {
		printf("파일 읽기 오픈 에러!\n");
		return -1;
	}
	PERSON temp3 = { 0 };	// 첫 데이터 읽어서 temp에 담고 출력(반복)
	// 파일에서 정상적으로 구조체 1개를 읽었다면 ↓	읽으면 1이 나오는데 끝까지 읽으면 리턴값이 1이 아닌 값이 나옴
	while (fread(&temp3, sizeof(temp3), 1, fp3) == 1) {
		printf("이름:%s 나이:%d 전화:%s 주소:%s\n", 
			temp3.name, temp3.age, temp3.tel, temp3.addr);
	}
	fclose(fp3);
}
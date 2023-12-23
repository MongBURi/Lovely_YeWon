#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
					// 다른 프로그래밍 언어와 공통은 아님.

// 구조체는 바이너리 모드를 많이 사용한다.
typedef struct fren {
	char name[10];
	char sex;
	int age;
} Friend;	// 구조체 정의

int main()
{
	FILE* fp;
	Friend myfren1;	// 구조체 변수
	Friend myfren2;

	/*** file write ***/
	fp = fopen("friend.bin", "wb");
	printf("이름, 성별, 나이 순 입력: ");
	scanf("%s %c %d", myfren1.name, &myfren1.sex, &myfren1.age);
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
	// (주소값(포인터변수), 구조체크기, 구조체 한 덩어리(이름성별나이), fp)
	fclose(fp);

	/*** file read ***/
	fp = fopen("friend.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);	// '(void*)' 생략 가능.
	printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
}
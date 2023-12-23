#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct friend {
	char name[20];
	char sex;
	int age;
};

int main_menu();
void fren_write(struct friend fw);
void fren_read(struct friend fr);

int main()
{
	/*	문제)	-------------------------
				파일 제어 프로그램 v1.0
				-------------------------
				1. 친구 정보 쓰기.
				2. 친구 정보 읽기.
				3. 종료.
				-------------------------
				메뉴 선택:	*/
	struct friend fren1 = { 0 };
	struct friend fren2 = { 0 };

	while (1) {
		switch (main_menu()) {
		case 1:							// case1: int a=10;(불가능){int a=10;}(가능) 
			fren_write(fren1);	break;
		case 2:
			fren_read(fren2);	break;
		case 3:
			printf("앱을 종료합니다.\n");
			exit(0);
		default:
			printf("잘못된 메뉴 입력!\n");
		}		
	}
}

int main_menu()
{
	printf("-------------------------\n");
	printf("파일 제어 프로그램 v1.0\n");
	printf("-------------------------\n");
	printf("1. 친구 정보 쓰기.\n");
	printf("2. 친구 정보 읽기.\n");
	printf("3. 종료.\n");
	printf("-------------------------\n");
	printf("메뉴 선택: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}
void fren_write(struct friend fw)
{
	FILE* fp = fopen("friend.bin", "wb");
	printf("이름 입력: ");
	scanf("%s", fw.name);
	printf("성별 입력: ");
	getchar();
	scanf("%c", &fw.sex);
	printf("나이 입력: ");
	scanf("%d", &fw.age);
	fwrite(&fw, sizeof(fw), 1, fp);
	fclose(fp);
}
void fren_read(struct friend fr)
{
	FILE* fp = fopen("friend.bin", "rb");	
	fread(&fr, sizeof(fr), 1, fp);
	printf("친구 이름: %s\n", fr.name);
	printf("친구 성별: %c\n", fr.sex);
	printf("친구 나이: %d\n", fr.age);
	fclose(fp);
}
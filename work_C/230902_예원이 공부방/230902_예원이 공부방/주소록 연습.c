#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define RAND_SIZE 5

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
} ADDR;

const int id[] = { 111, 222, 333, 444, 555 };
const char* name[] = { "일예원", "이예원", "삼예원", "사예원", "오예원" };
const char* tel[] = { "010-1234-1111", "010-1234-2222", "010-1234-3333", "010-1234-4444", "010-1234-5555" };
const char* addr[] = { "달나라", "햇동산", "꿈동네", "바닷마을", "꽃언덕" };
const char* email[] = { "네이버", "다음", "구글", "트위터", "유튜브" };

int main_menu();

void write_addr_rand(char filename[]);
void write_addr_dir(char filename[]);
void del_all_addr(char filename[]);
void read_addr(char filename[]);
void search_addr(char filename[], char name[]);
void del_name_addr(char filename[], char name[]);

int main()
{
	/*	문제)	◇ 파일명: address.bin → 매개변수로 전달할 것.
				=========================
				주소록 관리 프로그램 v1.0
				-------------------------
				1. 주소록 자동 생성.
				2. 주소록 직접 입력.
				3. 주소록 전체 삭제.
				4. 주소록 보기.
				5. 종료.
				=========================
				메뉴 선택:	*/
	srand(time(NULL));
	char filename[] = "공부방_address.bin";

	while (1) {
		switch (main_menu()) {
		case 1:	// 자동 생성		
			write_addr_rand(filename);
			printf("주소록 생성 중...");
			Sleep(1000);
			printf("\n");
			printf("주소록 생성이 완료되었습니다.\n");
			system("pause");
			break;
		case 2:	// 직접 입력		
			write_addr_dir(filename);
			printf("\n");
			printf("주소록 입력이 완료되었습니다.\n");
			system("pause");
			break;
		case 3:	// 전체 삭제			
			del_all_addr(filename);
			printf("전체 데이터 삭제 중...\n");
			Sleep(1000);
			printf("전체 데이터 삭제가 완료되었습니다.\n");
			system("pause");
			break;
		case 4:	// 보기			
			read_addr(filename);
			system("pause");
			break;
		case 5:	// 검색	
		{
			char name[20] = { 0 };
			printf("검색할 이름을 입력하세요: ");
			scanf("%s", &name);
			search_addr(filename, name);
			system("pause");
			break;
		}
		case 6:	// 삭제		
		{
			char name[20] = { 0 };
			printf("삭제할 이름을 입력하세요: ");
			scanf("%s", &name);
			del_name_addr(filename, name);
			system("pause");
			break;
		}
		case 7:	// 수정		
			break;
		case 8:
			printf("프로그램을 종료합니다.\n");
			exit(0);
		default:
			printf("잘못된 메뉴를 입력하셨습니다.\n");
			break;
		}
		system("cls");
	}
}

int main_menu()
{
	printf("=========================\n");
	printf("주소록 관리 프로그램 v1.0\n");
	printf("-------------------------\n");
	printf("1. 주소록 자동 생성.\n");
	printf("2. 주소록 직접 입력.\n");
	printf("3. 주소록 전체 삭제.\n");
	printf("4. 주소록 보기.\n");
	printf("5. 주소록 검색하기.\n");
	printf("6. 주소록 삭제하기.\n");
	printf("7. 주소록 수정하기.\n");
	printf("8. 종료.\n");
	printf("=========================\n");
	printf("메뉴 선택: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void write_addr_rand(char filename[])
{
	ADDR ad[RAND_SIZE] = { 0 };
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return -1;
	}
	for (int i = 0; i < 5; i++) {
		ad[i].id = id[rand() % 5];
		strcpy(ad[i].name, name[rand() % 5]);
		strcpy(ad[i].tel, tel[rand() % 5]);
		strcpy(ad[i].addr, addr[rand() % 5]);
		strcpy(ad[i].email, email[rand() % 5]);
		fwrite(&ad[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}

void write_addr_dir(char filename[])
{
	ADDR ad = { 0 };
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return -1;
	}
	printf("ID를 입력하세요: ");
	scanf("%d", &ad.id);
	printf("이름을 입력하세요: ");
	scanf("%s", ad.name);
	printf("전화를 입력하세요: ");
	scanf("%s", ad.tel);
	getchar();
	printf("주소를 입력하세요: ");
	gets(ad.addr);
	printf("이메일을 입력하세요: ");
	scanf("%s", &ad.email);
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void del_all_addr(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("파일 삭제 실패!\n");
		return -1;
	}
	fclose(fp);
}

void read_addr(char filename[])
{
	ADDR temp = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return -1;
	}
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		printf(">>> %d번째 주소록 <<<\n", count++);
		printf("ID: %d\n", temp.id);
		printf("이름: %s\n", temp.name);
		printf("전화: %s\n", temp.tel);
		printf("주소: %s\n", temp.addr);
		printf("Email: %s\n", temp.email);
		printf("\n");
		check = 1;
	}
	fclose(fp);
	if (check == 0) {
		printf("저장된 데이터가 없습니다.\n");
	}
}

void search_addr(char filename[], char name[])
{
	ADDR temp = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return -1;
	}
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		if (strcmp(temp.name, name) == 0) {
			printf(">>> %d번째 주소록 <<<\n", count++);
			printf("ID: %d\n", temp.id);
			printf("이름: %s\n", temp.name);
			printf("전화: %s\n", temp.tel);
			printf("주소: %s\n", temp.addr);
			printf("Email: %s\n", temp.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("저장된 데이터가 없습니다.\n");
	}
}

void del_name_addr(char filename[], char name[])
{
	ADDR temp = { 0 };
	ADDR new[100] = { 0 };
	int check = 0;
	int i = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 실패!\n");
		return -1;
	}
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		if (strcmp(temp.name, name) != 0) {
			new[i].id = temp.id;
			strcpy(new[i].name, temp.name);
			strcpy(new[i].tel, temp.tel);
			strcpy(new[i].addr, temp.addr);
			strcpy(new[i].email, temp.email);
			i++;
		}
		check = 1;
	}
	fclose(fp);

	if (check == 0) {
		printf("저장된 데이터가 없습니다.\n");
	}

	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("파일 삭제 실패!\n");
		return -1;
	}
	for (int i = 0; i < 100; i++) {
		new[i].id = temp.id;
		strcpy(new[i].name, temp.name);
		strcpy(new[i].tel, temp.tel);
		strcpy(new[i].addr, temp.addr);
		strcpy(new[i].email, temp.email);
		fwrite(&new[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}
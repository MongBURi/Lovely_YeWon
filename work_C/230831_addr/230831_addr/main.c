#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
const char* caddr[] = { "달나라", "햇동산", "꿈동네", "바닷마을", "꽃언덕" };
const char* email[] = { "네이버", "다음", "구글", "트위터", "유튜브" };

int main_menu();
void wrtie_addr_rand(char fileName[], ADDR addr[]);
void write_addr_dir(char fileName[], ADDR addr[]);
void read_addr(char fileName[]);
void addr_all_del(char fileName[]);

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
	char fileName[] = "address.bin";
	ADDR addr[5] = { 0 };

	while (1) {
		switch (main_menu()) {
		case 1:
			wrtie_addr_rand(fileName, addr);
			break;
		case 2:
			write_addr_dir(fileName, addr);
			break;
		case 3:
			addr_all_del(fileName);
			break;	
		case 4:
			read_addr(fileName);
			break;		
		case 5:
			printf("프로그램을 종료합니다.\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!\n");
		}
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
	printf("5. 종료.\n");
	printf("=========================\n");
	printf("메뉴 선택: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void wrtie_addr_rand(char fileName[], ADDR addr[])
{
	FILE* fp = fopen(fileName, "ab");
	if (fp == NULL) {
		printf("파일 쓰기(R) 오픈 실패!\n");
		return -1;
	}
	for (int i = 0; i < 5; i++) {
		addr[i].id = id[rand() % 5];
		strcpy(addr[i].name, name[rand() % 5]);
		strcpy(addr[i].tel, tel[rand() % 5]);
		strcpy(addr[i].addr, caddr[rand() % 5]);
		strcpy(addr[i].email, email[rand() % 5]);
		fwrite(&addr[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
	printf("주소록(R)이 입력되었습니다.\n");
}

void write_addr_dir(char fileName[], ADDR addr[])
{
	FILE* fp = fopen("address.bin", "ab");
	if (fp == NULL) {
		printf("파일 쓰기(D) 오픈 실패!\n");
		return -1;
	}
	printf("아이디: ");
	scanf("%d", &addr[0].id);
	printf("이름: ");
	scanf("%s", &addr[0].name);
	printf("전화: ");
	scanf("%s", &addr[0].tel);	
	printf("주소: ");	
	scanf("%s", &addr[0].addr);
	printf("이메일: ");
	scanf("%s", &addr[0].email);
	fwrite(&addr[0], sizeof(ADDR), 1, fp);
	fclose(fp);
	printf("주소록(D)이 입력되었습니다.\n");
}

void read_addr(char fileName[])
{
	ADDR temp = { 0 };
	FILE* fp = fopen(fileName, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오픈 실패!\n");
		return -1;
	}
	int num = 1;
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		printf("%d번 주소록\n", num++);
		printf("아이디: %d\n", temp.id);
		printf("이름: %s\n", temp.name);
		printf("전화: %s\n", temp.tel);
		printf("주소: %s\n", temp.addr);
		printf("이메일: %s\n", temp.email);
		printf("\n");
	}
	fclose(fp);
}

void addr_all_del(char fileName[])
{
	FILE* fp = fopen(fileName, "wb");
	if (fp == NULL) {
		printf("파일 삭제 오픈 실패!\n");
		return -1;
	}
	fclose(fp);
	printf("주소록이 전부 삭제되었습니다.\n");
}
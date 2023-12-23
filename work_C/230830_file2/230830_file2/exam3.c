#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct _CAR {
	char model[20];
	char price[20];
	int year;
} CAR;

typedef struct _CUST {
	char name[20];
	char tel[20];
	char addr[50];
	CAR car;
} CUST;

int main_menu();
void write_cust_dir(char fileName[]);
void write_cust_rand(char fileName[]);
void read_cust(char fileName[]);
void del_all_cust(char fileName[]);

const char* name[] = { "일예원", "이예원", "삼예원", "사예원", "오예원" };
const char* tel[] = { "010-1234-1111", "010-1234-2222", "010-1234-3333", "010-1234-4444", "010-1234-5555" };
const char* addr[] = { "달나라", "햇동산", "꿈동네", "바닷마을", "꽃언덕" };
const char* model[] = { "부릉부릉이", "띠띠빵빵이", "따릉따릉이", "덜컹덜컹이", "삐그덩이" };
const char* price[] = { "1000만원", "2000만원", "3000만원", "4000만원", "5000만원" };
const int year[] = { 2010, 2020, 2030, 2040, 2050 };

int main()
{
	/*	문제)	※ 파일에 저장할 때 기존 데이터가 계속 존재해야 됨. ※
				-------------------------
				고객 차량 관리 프로그램 v2.0
				-------------------------
				1. 고객 정보 직접 입력.
				2. 고객 정보 랜덤 입력.
				3. 고객 정보 보기.
				4. 고객 정보 전체 삭제.
				5. 종료.
				-------------------------
				메뉴 선택:
				
				◇ 고객 정보: 이름, 전화, 주소
				◇ 차량 정보: 모델명, 가격, 연식	*/
	
	// 파일의 이름을 매개변수로 전달하시오.
	char fileName[] = "client.bin";
		
	while (1) {
		switch (main_menu()) {
		case 1:
			write_cust_dir(fileName);
			break;		
		case 2:
			write_cust_rand(fileName);
			break;		
		case 3:
			read_cust(fileName);
			break;		
		case 4:
			del_all_cust(fileName);
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
	printf("-------------------------\n");
	printf("고객 차량 관리 프로그램 v2.0\n");
	printf("-------------------------\n");
	printf("1. 고객 정보 직접 입력.\n");
	printf("2. 고객 정보 랜덤 입력.\n");
	printf("3. 고객 정보 보기.\n");
	printf("4. 고객 정보 전체 삭제.\n");
	printf("5. 종료.\n");
	printf("-------------------------\n");
	printf("메뉴 선택: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

// 파일에 고객정보 직접 입력
void write_cust_dir(char fileName[])
{	
	CUST cust = { 0 };
	printf("고객 이름: ");
	scanf("%s", &cust.name);
	printf("고객 전화: ");
	scanf("%s", &cust.tel);
	printf("고객 주소: ");		// 전화 입력 후 엔터키를 'getchar()'가 먹어줌.
	scanf("%s", &cust.addr);	// 'gets': 공백을 입력받기 위해 사용.
	printf("차량 모델명: ");
	scanf("%s", &cust.car.model);
	printf("차량 가격: ");
	scanf("%s", &cust.car.price);
	printf("차량 연식: ");
	scanf("%d", &cust.car.year);

	FILE* fp = fopen(fileName, "ab");
	if (fp == NULL) {
		printf("파일 쓰기(D) 오픈 실패!\n");
		return -1;
	}
	fwrite(&cust, sizeof(cust), 1, fp);
	fclose(fp);
	printf("정상적으로 입력되었습니다.\n");
}

//파일에 고객정보 랜덤 입력
void write_cust_rand(char fileName[])
{
	srand(time(NULL));
	CUST cu[5] = { 0 };
	FILE* fp = fopen(fileName, "ab");
	if (fp == NULL) {
		printf("파일 쓰기(R) 오픈 실패!\n");
		return -1;
	}
	for (int i = 0; i < 5; i++) {
		strcpy(cu[i].name, name[rand() % 5]);
		strcpy(cu[i].tel, tel[rand() % 5]);
		strcpy(cu[i].addr, addr[rand() % 5]);

		strcpy(cu[i].car.model, model[rand() % 5]);
		strcpy(cu[i].car.price, price[rand() % 5]);
		cu[i].car.year = year[rand() % 5];
		fwrite(&cu[i], sizeof(CUST), 1, fp);		
	}
	fclose(fp);	
}

// 고객정보 보기
void read_cust(char fileName[])
{
	CUST temp = { 0 };	
	FILE* fp = fopen(fileName, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오픈 실패!\n");
		return -1;
	}
	int num = 1;
	while (fread(&temp, sizeof(temp), 1, fp) == 1) {
		printf(">>> %d번 고객 정보 <<<\n", num++);
		printf("이름: %s\n", temp.name);
		printf("전화: %s\n", temp.tel);
		printf("주소: %s\n", temp.addr);
		printf("모델: %s\n", temp.car.model);
		printf("가격: %s\n", temp.car.price);
		printf("연식: %d\n", temp.car.year);
		printf("\n");
	}
	fclose(fp);
}

// 고객정보 전체 삭제
void del_all_cust(char fileName[])
{
	FILE* fp = fopen(fileName, "wb");	// 파일 삭제 = 열고,닫기 끝
	if (fp == NULL) {
		printf("파일 전체 삭제 실패!\n");
		return -1;
	}
	fclose(fp);
	printf("전체 데이터를 삭제했습니다.\n");
}
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

int main_menu();

int main()
{
	/*	문제)	-------------------------
				파일 제어 프로그램 v1.0
				-------------------------
				1. 랜덤한 데이터 파일 입력.
				2. 파일에서 읽어오기.
				3. 종료.
				-------------------------
				메뉴 선택:	*/

	char* name[] = { "일예원", "이예원", "삼예원", "사예원", "오예원" };
	int age[] = { 10, 15, 20, 25, 30 };
	char* tel[] = { "010-1234-1111", "010-1234-2222", "010-1234-3333", "010-1234-4444", "010-1234-5555" };
	char* addr[] = { "달나라", "햇동산", "꿈동네", "바닷마을", "꽃언덕" };

	srand(time(NULL));	

	switch (main_menu()) {
	case 1:		
	{
		PERSON per_arr[10] = { 0 };
		FILE* fp = fopen("person.bin", "wb");
		for (int i = 0; i < 10; i++) {
			strcpy(per_arr[i].name, name[rand() % 5]);
			per_arr[i].age = age[rand() % 5];
			strcpy(per_arr[i].tel, tel[rand() % 5]);
			strcpy(per_arr[i].addr, addr[rand() % 5]);
			fwrite(&per_arr[i], sizeof(PERSON), 1, fp);
		}
		fclose(fp);
		printf("정상적으로 입력되었습니다.\n");
		break;
	}		
	case 2: 
	{
		PERSON temp = { 0 };	// temp에 한 덩어리 담고 뿌리고(반복)
		FILE* fp = fopen("person.bin", "rb");
		int cnt = 1;
		while (fread(&temp, sizeof(PERSON), 1, fp) == 1) {
			printf("번호:%d 이름:%s 나이:%d 번호:%s 주소:%s\n", cnt++,
				temp.name, temp.age, temp.tel, temp.addr);
		}
		fclose(fp);
		break;
	}
	case 3:
		printf("앱을 종료합니다.\n");
		exit(0);
	default:
		printf("잘못된 메뉴 입력!\n");
	}
}

int main_menu()
{
	printf("-------------------------\n");
	printf("파일 제어 프로그램 v1.0\n");
	printf("-------------------------\n");
	printf("1. 랜덤한 데이터 파일 입력.\n");
	printf("2. 파일에서 읽어오기.\n");
	printf("3. 종료.\n");
	printf("-------------------------\n");
	printf("메뉴 선택: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}
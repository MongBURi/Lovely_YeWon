// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>// Sleep()	// 안 쓰이는 헤더파일 있다고 오류 안 생김. 그냥 둬도 됨.
#include <conio.h>
#include "menu.h"	// #include "": 내가 정의한 함수 땡겨올 수 있다
#include "ui.h"
#include "file.h"
#include "rdata.h"

int main()
{
	char file[] = "address.bin";
	srand(time(NULL));
	set_cursor_type(NOCURSOR);
	font_color(LIGTH_YELLOW);
	title();
	_getch();

	system("cls");
	font_color(WHITE);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {
		case MAIN_RAND_INS:	// 랜덤 입력
		{
			ADDR ad[RAND_SIZE] = { 0 };
			int len = sizeof(ad) / sizeof(ADDR);
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);
			printf("랜덤 데이터를 생성중입니다…\n");
			Sleep(2000);
			system("pause");
			break;
		}
		case MAIN_DIR_INS:	// 직접 입력
		{
			ADDR ad = { 0 };
			printf("ID: ");
			scanf("%d", &ad.id);
			printf("이름: ");
			scanf("%s", ad.name);
			printf("전화: ");
			scanf("%s", ad.tel);
			printf("주소: ");
			getchar();
			gets(ad.addr);
			printf("Email: ");
			scanf("%s", ad.email);

			file_write(ad, file);
			printf("랜덤 데이터를 입력중입니다…\n");
			Sleep(1000);
			system("pause");
			break;
		}
		case MAIN_ALL_DEL:	// 전체 삭제
			file_del_all(file);
			printf("전체 데이터를 삭제중입니다\n");
			Sleep(2000);
			system("pause");
			break;
		case MAIN_VIEW:
			file_read(file);
			system("pause");
			break;
		case MAIN_SEARCH:	// 검색
		{
			/*printf("이름 검색: ");
			char name[20] = { 0 };
			scanf("%s", &name);	// file_search()검색용	*/
			// ↓ file_search2()용: 내가 한 거
			/*system("cls");
			file_search2(file);
			system("pause");
			break;*/

			while (1) {
				system("cls");
				int submenu = search_menu();
				if (submenu == 1) {
					char name[20] = { 0 };
					printf("검색할 이름을 입력하세요: ");
					scanf("%s", &name);
					// 이름 검색
					file_search3(file, name, EMAIL_EMPTY, ID_EMPTY);	// 0or-1 사용하지 않는다
					system("pause");
				}
				else if (submenu == 2) {
					int id = 0;
					printf("검색할 ID를 입력하세요: ");
					scanf("%d", &id);
					// ID 검색
					file_search3(file, NAME_EMPTY, EMAIL_EMPTY, id);
					system("pause");					
				}					
				else if (submenu == 3) {
					char email[20] = { 0 };
					printf("검색할 Email을 입력하세요: ");
					scanf("%s", &email);
					// Email 검색
					file_search3(file, NAME_EMPTY, email, ID_EMPTY);
					system("pause");					
				}				
				else if (submenu == 4) {
					break;	// while()탈출
				}
			}
			break;
		}
		case 6:	// 검색 삭제
			printf("삭제할 이름을 입력하세요: ");
			char name[20] = { 0 };
			scanf("%s", name);
			printf("%s 데이터를 삭제 중입니다...\n", name);
			file_delete2(file, name);
			Sleep(2000);
			system("pause");
			break;
		case 7:	// 수정
			printf("검색할 이름을 입력하세요: ");
			char sname[20] = { 0 };
			scanf("%s", sname);
			printf("수정할 이름을 입력하세요: ");
			char dname[20] = { 0 };
			scanf("%s", dname);
			file_update(file, sname, dname);
			printf("%s 데이터를 수정 중입니다...\n", sname);
			Sleep(2000);
			system("pause");
			break;
		case 8:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!!\n");
		}
		system("cls");
	}
}
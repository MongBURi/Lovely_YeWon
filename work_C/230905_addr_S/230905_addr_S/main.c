// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>// Sleep()	// �� ���̴� ������� �ִٰ� ���� �� ����. �׳� �ֵ� ��.
#include <conio.h>
#include "menu.h"	// #include "": ���� ������ �Լ� ���ܿ� �� �ִ�
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
		case MAIN_RAND_INS:	// ���� �Է�
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
			printf("���� �����͸� �������Դϴ١�\n");
			Sleep(2000);
			system("pause");
			break;
		}
		case MAIN_DIR_INS:	// ���� �Է�
		{
			ADDR ad = { 0 };
			printf("ID: ");
			scanf("%d", &ad.id);
			printf("�̸�: ");
			scanf("%s", ad.name);
			printf("��ȭ: ");
			scanf("%s", ad.tel);
			printf("�ּ�: ");
			getchar();
			gets(ad.addr);
			printf("Email: ");
			scanf("%s", ad.email);

			file_write(ad, file);
			printf("���� �����͸� �Է����Դϴ١�\n");
			Sleep(1000);
			system("pause");
			break;
		}
		case MAIN_ALL_DEL:	// ��ü ����
			file_del_all(file);
			printf("��ü �����͸� �������Դϴ�\n");
			Sleep(2000);
			system("pause");
			break;
		case MAIN_VIEW:
			file_read(file);
			system("pause");
			break;
		case MAIN_SEARCH:	// �˻�
		{
			/*printf("�̸� �˻�: ");
			char name[20] = { 0 };
			scanf("%s", &name);	// file_search()�˻���	*/
			// �� file_search2()��: ���� �� ��
			/*system("cls");
			file_search2(file);
			system("pause");
			break;*/

			while (1) {
				system("cls");
				int submenu = search_menu();
				if (submenu == 1) {
					char name[20] = { 0 };
					printf("�˻��� �̸��� �Է��ϼ���: ");
					scanf("%s", &name);
					// �̸� �˻�
					file_search3(file, name, EMAIL_EMPTY, ID_EMPTY);	// 0or-1 ������� �ʴ´�
					system("pause");
				}
				else if (submenu == 2) {
					int id = 0;
					printf("�˻��� ID�� �Է��ϼ���: ");
					scanf("%d", &id);
					// ID �˻�
					file_search3(file, NAME_EMPTY, EMAIL_EMPTY, id);
					system("pause");					
				}					
				else if (submenu == 3) {
					char email[20] = { 0 };
					printf("�˻��� Email�� �Է��ϼ���: ");
					scanf("%s", &email);
					// Email �˻�
					file_search3(file, NAME_EMPTY, email, ID_EMPTY);
					system("pause");					
				}				
				else if (submenu == 4) {
					break;	// while()Ż��
				}
			}
			break;
		}
		case 6:	// �˻� ����
			printf("������ �̸��� �Է��ϼ���: ");
			char name[20] = { 0 };
			scanf("%s", name);
			printf("%s �����͸� ���� ���Դϴ�...\n", name);
			file_delete2(file, name);
			Sleep(2000);
			system("pause");
			break;
		case 7:	// ����
			printf("�˻��� �̸��� �Է��ϼ���: ");
			char sname[20] = { 0 };
			scanf("%s", sname);
			printf("������ �̸��� �Է��ϼ���: ");
			char dname[20] = { 0 };
			scanf("%s", dname);
			file_update(file, sname, dname);
			printf("%s �����͸� ���� ���Դϴ�...\n", sname);
			Sleep(2000);
			system("pause");
			break;
		case 8:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!!\n");
		}
		system("cls");
	}
}
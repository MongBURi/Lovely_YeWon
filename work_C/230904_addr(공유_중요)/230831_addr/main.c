// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()

#include <windows.h>// win32 api ��� / C��� ǥ���� �ƴ� / ������ �ü������ ��� ������ C���α׷�
#include <conio.h>	// �ܼ�(����ȭ��) ��ǲ �ƿ�ǲ

#define RAND_SIZE 5	// �迭�� ũ�� �� ��ó���� / ����,����,���ڿ��� ����

// define NOCURSOR 0		�� define(�η���): �ý��� ���α׷���, �ϵ���� �ʿ��� ���� ���
// define SOLID_CURSOR 1	// enum�� ���ų� define ��.(���� ����)
// define NORMAL_CURSOR 2	// const, enum > �������(������)

typedef enum {		// �̳�(ǥ��C): ex)��2 �ο��ϸ� �ڿ��� �ڵ����� 3,4�� �ο� ��.
	NOCURSOR,		// Ŀ�� ����		/ �� ���� �� �ϸ� �ڵ����� 0�� �ο��� �� / ������� �̸� ����
	SOLID_CURSOR,	// solid ����	/ 1 �ο�
	NORMAL_CURSOR	// �Ϲ� ����		/ 2 �ο�
} CURSOR_TYPE;

typedef enum {
	BLACK,		// 0
	BLUE,		// 1
	GREEN,		// 2
	CYAN,
	RED,
	PURPLE,
	YELLOW,
	WHITE,
	GRAY,
	LIGTH_BLUE,
	LIGTH_GREEN,
	LIGTH_CYAN,
	LIGTH_RED,
	LIGTH_PURPLE,
	LIGTH_YELLOW,
	LIGTH_GREY	// 15	
} FONT_COLOR;

typedef struct _ADDR {
	int id;
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
} ADDR;

const int id[] = { 111, 222, 333, 444, 555 };
const char* name[] = { "ȫ�浿", "����ġ", "������", "������", "�̼���" };
const char* tel[] = { "010-1234-1234", "010-1234-1111", "010-1234-2222",
	"010-1234-3333", "010-1234-4444" };
const char* addr[] = { "�뱸 ���� �ž�4��", "���� ���� �ž�4��" ,
	"���� ���� �ž�4��", 	"���� ���� �ž�4��", "�λ� ���� �ž�4��" };
const char* email[] = { "hong@naver.com", "joen@kakao.com",
	"kang@gmail.com", "yu@msn.com", "lee@daum.net" };

// �Լ� ���� ������Ÿ��
int main_menu();
void title();
void gotoxy(int x, int y);
void set_cursor_type(CURSOR_TYPE type);
void font_color(FONT_COLOR color);
void file_write_rand(ADDR ad[], char filename[], int len);
void file_write(ADDR ad, char filename[]);
void file_read(char filename[]);
void file_del_all(char filename[]);
void file_search(char filename[], char in_name[]);
void file_delete(char filename[], char delname[]);
void file_delete2(char filename[], char delname[]);
void file_update(char filename[], char sname[], char dname[]);

int main()
{
	char file[] = "address.bin";	// == char* file = "address.bin"
	srand(time(NULL));				// �����Լ� ����� ���� �õ� ����
	set_cursor_type(NOCURSOR);
	font_color(LIGTH_YELLOW);
	title();
	_getch();	// �ƹ� ���� �ϳ� �Է¹޴�(scanf()�� ���) ��� ����.

	system("cls");
	font_color(WHITE);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {	// case1,2,3�� enum�̳� #define���� ��(����)
		case 1:
		{
			ADDR ad[RAND_SIZE] = { 0 };	// []�ȿ� �Ϲݺ��� �� �� ����. enum�� �Ұ���: ex)[BLACK]
			int len = sizeof(ad) / sizeof(ADDR);	// �迭�� ũ��
			for (int i = 0; i < len; i++) {			// sizeof(ad) == ADDRx5: 5����� 1����� ������ 5
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);	// (�ּҿ� ���� ����,�ּ�,���� ���� ����)
			printf("���� �����͸� �������Դϴ١�\n");
			Sleep(2000);	// �ϵ����� ������ �߻��ϱ� ������ �̼��� ������ �ʿ�.
			system("pause");// (sec(1��) - ms(2000/sec=2��) - us - ns)
			break;
		}
		case 2:
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

			file_write(ad, file);	// ���� ���� ����(����ü����), �ּҿ� ���� ����
			printf("���� �����͸� �Է����Դϴ١�\n");
			Sleep(1000);
			system("pause");
			break;
		}
		case 3:
			file_del_all(file);
			printf("��ü �����͸� �������Դϴ�\n");
			Sleep(2000);
			system("pause");
			break;
		case 4:
			file_read(file);
			system("pause");
			break;
		case 5:	// �˻�(�̸�)
		{
			char in_name[20] = { 0 };
			printf("�̸� �˻�: ");
			scanf("%s", in_name);
			file_search(file, in_name);
			system("pause");
			break;
		}
		case 6:	// ����
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

int main_menu()
{
	printf("=============================\n");
	printf("�ּҷ� ���� ���α׷� v1.0\n");
	printf("-----------------------------\n");
	printf("1.�ּҷ� �ڵ� ����\n");
	printf("2.�ּҷ� ���� �Է�\n");
	printf("3.�ּҷ� ��ü ����\n");
	printf("4.�ּҷ� ����\n");
	printf("5.�ּҷ� �˻��ϱ�\n");	// ����-(���)-�˻�
	printf("6.�ּҷ� �����ϱ�\n");	// ����-(���)-����
	printf("7.�ּҷ� �����ϱ�\n");
	printf("8.����\n");
	printf("=============================\n");
	printf("�޴� ����:");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void title()	// 1~3�� ���̰� ����
{
	int x = 5;
	int y = 3;
	gotoxy(x, y + 0); printf("����������������������������������������������������������������������������������������������������������������������");
	gotoxy(x, y + 1); printf("��                                                         ��");
	gotoxy(x, y + 2); printf("��                                                         ��");
	gotoxy(x, y + 3); printf("��                                                         ��");
	gotoxy(x, y + 4); printf("��                                                         ��");
	gotoxy(x, y + 5); printf("��                                                         ��");
	gotoxy(x, y + 6); printf("��                                                         ��");
	gotoxy(x, y + 7); printf("����������������������������������������������������������������������������������������������������������������������");
	gotoxy(x + 16, y + 2); printf("�ּҷ� ���� ���α׷� v1.5");
	gotoxy(x + 33, y + 4); printf("���߳�¥	: 2023.09.01");
	gotoxy(x + 33, y + 5); printf("������	: �ſ���");
	gotoxy(x + 10, y + 11); printf("�޴�ȭ�� �̵��� �ƹ�Ű�� �����ּ���^-^!");
}
// Ŀ�� �̵� ��ǥ
void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);	// ǥ��C�Լ� �ƴ� win32�ü������ ����ϴ� ��
}
// Ŀ�� Ÿ���� ����
void set_cursor_type(CURSOR_TYPE type)
{
	CONSOLE_CURSOR_INFO info = { 0 };
	switch (type) {
	case NOCURSOR:
		info.dwSize = 1;
		info.bVisible = FALSE;
		break;
	case SOLID_CURSOR:
		info.dwSize = 100;
		info.bVisible = TRUE;
		break;
	case NORMAL_CURSOR:
		info.dwSize = 20;
		info.bVisible = TRUE;
		break;
	}	// win32 API (���ø����̼� ���α׷��� �������̽�?)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}
// ��Ʈ�� ���� ����
void font_color(FONT_COLOR color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void file_write_rand(ADDR ad[], char filename[], int len)
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return;
	}

	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}

void file_write(ADDR ad, char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_read(char filename[])
{
	// �����Ͱ� ������ "�����Ͱ� �������� �ʽ��ϴ�" ���� �޽����� ����Ͻÿ�
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �б� ����!\n");
		return;
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;	// flag����: üũ�뵵�� ���� ������ �÷��׺������ �θ� ex)��߿÷�����
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		printf("%d�� �ּҷ�\n", count++);
		printf("ID: %d\n", ad.id);
		printf("�̸�: %s\n", ad.name);
		printf("��ȭ: %s\n", ad.tel);
		printf("�ּ�: %s\n", ad.addr);
		printf("Email: %s\n", ad.email);
		printf("\n");
		check = 1;	// while���� �������� ������ �״��0, �����ϸ� 1�� �ٲ�
	}
	/*if (fread(&ad, sizeof(ad), 1, fp) != 1) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}*/
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_del_all(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		exit(0);
	}
	fclose(fp);
}

void file_search(char filename[], char in_name[])
{
	// �̸����� �˻�	
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (strcmp(ad.name, in_name) == 0) {	// �����ϸ� ���ϰ��� 0�� �´�
			printf("%d�� �ּҷ�\n", count++);
			printf("ID: %d\n", ad.id);
			printf("�̸�: %s\n", ad.name);
			printf("��ȭ: %s\n", ad.tel);
			printf("�ּ�: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_delete(char filename[], char delname[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	// �����Ͱ� 1�� �������� ������ ���� �ʴ� ���� ������
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delname) != 0) {
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].email, ad.email);
			i++;	// ����Ǿ��� ����
			check = 1;
		}
	}
	fclose(fp);
	printf("������ ����i: %d\n", i);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
		// ���� ������ ������ ���ٸ� ��� ó���ؾ� �ɱ�?
		return;	// void �Լ��� �����
	}

	// �迭�� ����� ����ü ������ ���Ͽ� ���� (�� ���� ����)
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	for (i = 0; i < 200; i++) {	// 'i < (����Ǿ��� ���� ����i���)'�ص� ��
		printf("del_arr[%d]: %d", i, del_arr[i].id);
		//if (strcmp(del_arr[i].name, "") != 0) {
		if (del_arr[i].id != 0) {
			fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
		}
	}
	fclose(fp2);
}

void file_delete2(char filename[], char delname[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delname) != 0) {
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].email, ad.email);
			i++;
			check = 1;
		}
		if (strcmp(ad.name, delname) == 0) {
			check = 1;
		}
	}
	int size = i;
	fclose(fp);
	printf("������ ����i: %d\n", i);		// i������ �����
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
		return;
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	for (i = 0; i < size; i++) {
		printf("del_arr[%d]: %d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}

void file_update(char filename[], char sname[], char dname[])
{
	// ������ ��� �Է��� ��� �޾ƾ��ұ�
	// 1. �˻��� �̸�, ������ �̸� �� 2���� �̸��� �Է¹���
	// 2. ���Ͽ��� �о�� �̸��� �˻��� �̸��� ���ؼ� ������
	//    ������ �̸����� �����ؼ� �� �迭�� ����
	// 3. ������ �迭�� ���Ͽ� ���� ����

	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	ADDR ad = { 0 };
	ADDR up_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {		
		if (strcmp(ad.name, sname) == 0) {
			strcpy(up_arr[i].name, dname);		
			check = 1;
		}	
		else {
			strcpy(up_arr[i].name, ad.name);
		}
		up_arr[i].id = ad.id;
		strcpy(up_arr[i].tel, ad.tel);
		strcpy(up_arr[i].addr, ad.addr);
		strcpy(up_arr[i].email, ad.email);
		i++;		
	}
	int size = i;
	fclose(fp);

	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
		return;
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	for (i = 0; i < size; i++) {
		fwrite(&up_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);

}
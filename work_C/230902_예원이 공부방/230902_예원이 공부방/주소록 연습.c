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
const char* name[] = { "�Ͽ���", "�̿���", "�￹��", "�翹��", "������" };
const char* tel[] = { "010-1234-1111", "010-1234-2222", "010-1234-3333", "010-1234-4444", "010-1234-5555" };
const char* addr[] = { "�޳���", "�޵���", "�޵���", "�ٴ帶��", "�ɾ��" };
const char* email[] = { "���̹�", "����", "����", "Ʈ����", "��Ʃ��" };

int main_menu();

void write_addr_rand(char filename[]);
void write_addr_dir(char filename[]);
void del_all_addr(char filename[]);
void read_addr(char filename[]);
void search_addr(char filename[], char name[]);
void del_name_addr(char filename[], char name[]);

int main()
{
	/*	����)	�� ���ϸ�: address.bin �� �Ű������� ������ ��.
				=========================
				�ּҷ� ���� ���α׷� v1.0
				-------------------------
				1. �ּҷ� �ڵ� ����.
				2. �ּҷ� ���� �Է�.
				3. �ּҷ� ��ü ����.
				4. �ּҷ� ����.
				5. ����.
				=========================
				�޴� ����:	*/
	srand(time(NULL));
	char filename[] = "���ι�_address.bin";

	while (1) {
		switch (main_menu()) {
		case 1:	// �ڵ� ����		
			write_addr_rand(filename);
			printf("�ּҷ� ���� ��...");
			Sleep(1000);
			printf("\n");
			printf("�ּҷ� ������ �Ϸ�Ǿ����ϴ�.\n");
			system("pause");
			break;
		case 2:	// ���� �Է�		
			write_addr_dir(filename);
			printf("\n");
			printf("�ּҷ� �Է��� �Ϸ�Ǿ����ϴ�.\n");
			system("pause");
			break;
		case 3:	// ��ü ����			
			del_all_addr(filename);
			printf("��ü ������ ���� ��...\n");
			Sleep(1000);
			printf("��ü ������ ������ �Ϸ�Ǿ����ϴ�.\n");
			system("pause");
			break;
		case 4:	// ����			
			read_addr(filename);
			system("pause");
			break;
		case 5:	// �˻�	
		{
			char name[20] = { 0 };
			printf("�˻��� �̸��� �Է��ϼ���: ");
			scanf("%s", &name);
			search_addr(filename, name);
			system("pause");
			break;
		}
		case 6:	// ����		
		{
			char name[20] = { 0 };
			printf("������ �̸��� �Է��ϼ���: ");
			scanf("%s", &name);
			del_name_addr(filename, name);
			system("pause");
			break;
		}
		case 7:	// ����		
			break;
		case 8:
			printf("���α׷��� �����մϴ�.\n");
			exit(0);
		default:
			printf("�߸��� �޴��� �Է��ϼ̽��ϴ�.\n");
			break;
		}
		system("cls");
	}
}

int main_menu()
{
	printf("=========================\n");
	printf("�ּҷ� ���� ���α׷� v1.0\n");
	printf("-------------------------\n");
	printf("1. �ּҷ� �ڵ� ����.\n");
	printf("2. �ּҷ� ���� �Է�.\n");
	printf("3. �ּҷ� ��ü ����.\n");
	printf("4. �ּҷ� ����.\n");
	printf("5. �ּҷ� �˻��ϱ�.\n");
	printf("6. �ּҷ� �����ϱ�.\n");
	printf("7. �ּҷ� �����ϱ�.\n");
	printf("8. ����.\n");
	printf("=========================\n");
	printf("�޴� ����: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void write_addr_rand(char filename[])
{
	ADDR ad[RAND_SIZE] = { 0 };
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
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
		printf("���� ���� ����!\n");
		return -1;
	}
	printf("ID�� �Է��ϼ���: ");
	scanf("%d", &ad.id);
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", ad.name);
	printf("��ȭ�� �Է��ϼ���: ");
	scanf("%s", ad.tel);
	getchar();
	printf("�ּҸ� �Է��ϼ���: ");
	gets(ad.addr);
	printf("�̸����� �Է��ϼ���: ");
	scanf("%s", &ad.email);
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void del_all_addr(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
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
		printf("���� ���� ����!\n");
		return -1;
	}
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		printf(">>> %d��° �ּҷ� <<<\n", count++);
		printf("ID: %d\n", temp.id);
		printf("�̸�: %s\n", temp.name);
		printf("��ȭ: %s\n", temp.tel);
		printf("�ּ�: %s\n", temp.addr);
		printf("Email: %s\n", temp.email);
		printf("\n");
		check = 1;
	}
	fclose(fp);
	if (check == 0) {
		printf("����� �����Ͱ� �����ϴ�.\n");
	}
}

void search_addr(char filename[], char name[])
{
	ADDR temp = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return -1;
	}
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		if (strcmp(temp.name, name) == 0) {
			printf(">>> %d��° �ּҷ� <<<\n", count++);
			printf("ID: %d\n", temp.id);
			printf("�̸�: %s\n", temp.name);
			printf("��ȭ: %s\n", temp.tel);
			printf("�ּ�: %s\n", temp.addr);
			printf("Email: %s\n", temp.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("����� �����Ͱ� �����ϴ�.\n");
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
		printf("���� �б� ����!\n");
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
		printf("����� �����Ͱ� �����ϴ�.\n");
	}

	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
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
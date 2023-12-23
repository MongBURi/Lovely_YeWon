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
const char* name[] = { "�Ͽ���", "�̿���", "�￹��", "�翹��", "������" };
const char* tel[] = { "010-1234-1111", "010-1234-2222", "010-1234-3333", "010-1234-4444", "010-1234-5555" };
const char* caddr[] = { "�޳���", "�޵���", "�޵���", "�ٴ帶��", "�ɾ��" };
const char* email[] = { "���̹�", "����", "����", "Ʈ����", "��Ʃ��" };

int main_menu();
void wrtie_addr_rand(char fileName[], ADDR addr[]);
void write_addr_dir(char fileName[], ADDR addr[]);
void read_addr(char fileName[]);
void addr_all_del(char fileName[]);

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
			printf("���α׷��� �����մϴ�.\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!\n");
		}
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
	printf("5. ����.\n");
	printf("=========================\n");
	printf("�޴� ����: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void wrtie_addr_rand(char fileName[], ADDR addr[])
{
	FILE* fp = fopen(fileName, "ab");
	if (fp == NULL) {
		printf("���� ����(R) ���� ����!\n");
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
	printf("�ּҷ�(R)�� �ԷµǾ����ϴ�.\n");
}

void write_addr_dir(char fileName[], ADDR addr[])
{
	FILE* fp = fopen("address.bin", "ab");
	if (fp == NULL) {
		printf("���� ����(D) ���� ����!\n");
		return -1;
	}
	printf("���̵�: ");
	scanf("%d", &addr[0].id);
	printf("�̸�: ");
	scanf("%s", &addr[0].name);
	printf("��ȭ: ");
	scanf("%s", &addr[0].tel);	
	printf("�ּ�: ");	
	scanf("%s", &addr[0].addr);
	printf("�̸���: ");
	scanf("%s", &addr[0].email);
	fwrite(&addr[0], sizeof(ADDR), 1, fp);
	fclose(fp);
	printf("�ּҷ�(D)�� �ԷµǾ����ϴ�.\n");
}

void read_addr(char fileName[])
{
	ADDR temp = { 0 };
	FILE* fp = fopen(fileName, "rb");
	if (fp == NULL) {
		printf("���� �б� ���� ����!\n");
		return -1;
	}
	int num = 1;
	while (fread(&temp, sizeof(ADDR), 1, fp) == 1) {
		printf("%d�� �ּҷ�\n", num++);
		printf("���̵�: %d\n", temp.id);
		printf("�̸�: %s\n", temp.name);
		printf("��ȭ: %s\n", temp.tel);
		printf("�ּ�: %s\n", temp.addr);
		printf("�̸���: %s\n", temp.email);
		printf("\n");
	}
	fclose(fp);
}

void addr_all_del(char fileName[])
{
	FILE* fp = fopen(fileName, "wb");
	if (fp == NULL) {
		printf("���� ���� ���� ����!\n");
		return -1;
	}
	fclose(fp);
	printf("�ּҷ��� ���� �����Ǿ����ϴ�.\n");
}
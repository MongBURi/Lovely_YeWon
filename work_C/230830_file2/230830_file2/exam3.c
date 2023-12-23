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

const char* name[] = { "�Ͽ���", "�̿���", "�￹��", "�翹��", "������" };
const char* tel[] = { "010-1234-1111", "010-1234-2222", "010-1234-3333", "010-1234-4444", "010-1234-5555" };
const char* addr[] = { "�޳���", "�޵���", "�޵���", "�ٴ帶��", "�ɾ��" };
const char* model[] = { "�θ��θ���", "��컧����", "����������", "���ȴ�����", "�߱׵���" };
const char* price[] = { "1000����", "2000����", "3000����", "4000����", "5000����" };
const int year[] = { 2010, 2020, 2030, 2040, 2050 };

int main()
{
	/*	����)	�� ���Ͽ� ������ �� ���� �����Ͱ� ��� �����ؾ� ��. ��
				-------------------------
				�� ���� ���� ���α׷� v2.0
				-------------------------
				1. �� ���� ���� �Է�.
				2. �� ���� ���� �Է�.
				3. �� ���� ����.
				4. �� ���� ��ü ����.
				5. ����.
				-------------------------
				�޴� ����:
				
				�� �� ����: �̸�, ��ȭ, �ּ�
				�� ���� ����: �𵨸�, ����, ����	*/
	
	// ������ �̸��� �Ű������� �����Ͻÿ�.
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
			printf("���α׷��� �����մϴ�.\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!\n");
		}
	}	
}

int main_menu()
{	
	printf("-------------------------\n");
	printf("�� ���� ���� ���α׷� v2.0\n");
	printf("-------------------------\n");
	printf("1. �� ���� ���� �Է�.\n");
	printf("2. �� ���� ���� �Է�.\n");
	printf("3. �� ���� ����.\n");
	printf("4. �� ���� ��ü ����.\n");
	printf("5. ����.\n");
	printf("-------------------------\n");
	printf("�޴� ����: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

// ���Ͽ� ������ ���� �Է�
void write_cust_dir(char fileName[])
{	
	CUST cust = { 0 };
	printf("�� �̸�: ");
	scanf("%s", &cust.name);
	printf("�� ��ȭ: ");
	scanf("%s", &cust.tel);
	printf("�� �ּ�: ");		// ��ȭ �Է� �� ����Ű�� 'getchar()'�� �Ծ���.
	scanf("%s", &cust.addr);	// 'gets': ������ �Է¹ޱ� ���� ���.
	printf("���� �𵨸�: ");
	scanf("%s", &cust.car.model);
	printf("���� ����: ");
	scanf("%s", &cust.car.price);
	printf("���� ����: ");
	scanf("%d", &cust.car.year);

	FILE* fp = fopen(fileName, "ab");
	if (fp == NULL) {
		printf("���� ����(D) ���� ����!\n");
		return -1;
	}
	fwrite(&cust, sizeof(cust), 1, fp);
	fclose(fp);
	printf("���������� �ԷµǾ����ϴ�.\n");
}

//���Ͽ� ������ ���� �Է�
void write_cust_rand(char fileName[])
{
	srand(time(NULL));
	CUST cu[5] = { 0 };
	FILE* fp = fopen(fileName, "ab");
	if (fp == NULL) {
		printf("���� ����(R) ���� ����!\n");
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

// ������ ����
void read_cust(char fileName[])
{
	CUST temp = { 0 };	
	FILE* fp = fopen(fileName, "rb");
	if (fp == NULL) {
		printf("���� �б� ���� ����!\n");
		return -1;
	}
	int num = 1;
	while (fread(&temp, sizeof(temp), 1, fp) == 1) {
		printf(">>> %d�� �� ���� <<<\n", num++);
		printf("�̸�: %s\n", temp.name);
		printf("��ȭ: %s\n", temp.tel);
		printf("�ּ�: %s\n", temp.addr);
		printf("��: %s\n", temp.car.model);
		printf("����: %s\n", temp.car.price);
		printf("����: %d\n", temp.car.year);
		printf("\n");
	}
	fclose(fp);
}

// ������ ��ü ����
void del_all_cust(char fileName[])
{
	FILE* fp = fopen(fileName, "wb");	// ���� ���� = ����,�ݱ� ��
	if (fp == NULL) {
		printf("���� ��ü ���� ����!\n");
		return -1;
	}
	fclose(fp);
	printf("��ü �����͸� �����߽��ϴ�.\n");
}
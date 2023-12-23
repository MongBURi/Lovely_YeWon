#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct car {
	char name[20];		// �𵨸�
	int price;			// ����
	int year;			// ����
	char color[20];		// ����
	char office[100];	// ������
};

struct client {
	char name[20];		// ����
	char tel[20];		// ��ȭ��ȣ
	char addr[100];		// �ּ�
	char job[20];		// ����
	char birth[20];		// ����
	struct car choice;	// ��������	// DB�� ������, �������� ã���� �ڵ��� ������ Ȯ�� ����.
};

// ��������, ��� �Լ��� ������ �ش�.
char* name[3] = { "�Ͽ���", "�̿���", "�￹��" };
char* tel[3] = { "010-1234-0001", "010-1234-0001", "010-1234-0001" };
char* addr[3] = { "�޳���", "�޳���", "�޳���" };
char* job[3] = { "�л�", "������", "����" };
char* birth[3] = { "5��5��", "11��11��", "12��25��" };
char* cname[3] = { "������", "�θ���", "������" };
char* color[3] = { "��ũ", "����", "��Ʈ" };
char* office[3] = { "�ٴ帶��", "�ջ�", "�޵���" };
int price[3] = { 10000, 200000, 3000000 };
int year[3] = { 2000, 2010, 2020 };

int menu();
void ins_customer(struct client in[]);
void show_customer(struct client out[]);

int main()
{
	/*	ex)	-------------------------
			�� ���� ���� ���α׷� v1.5
			-------------------------
			1. �� �� �������� �Է�.
			2. �� �� �������� ����.
			3. ����.
			-------------------------
			�޴� ����:	*/
	
	srand(time(NULL));	// ���� �Լ��� ����ϱ� ���� �ʼ� ����.
	struct client cl_arr[100] = { 0 };	// ����ü �̸�(=������ Ÿ��)
	
	while (1) {
		switch (menu()) {
		case 1:
			ins_customer(cl_arr);	break;
		case 2:
			show_customer(cl_arr);	break;
		case 3:
			printf("���� �����մϴ�.\n");
			exit(0);
		default:
			printf("�߸��� �޴��� �����ϼ̽��ϴ�.\n");
			printf("�ٽ� �Է��ϼ���.\n");
		}		
	}
}

int menu()
{
	printf("-------------------------\n");
	printf("�� ���� ���� ���α׷� v1.5\n");
	printf("-------------------------\n");
	printf("1. �� �� �������� �Է�.\n");
	printf("2. �� �� �������� ����.	\n");
	printf("3. ����\n");
	printf("-------------------------\n");
	printf("�޴� ����: \n");
	int menu;
	scanf("%d", &menu);
	return menu;
}
void ins_customer(struct client in[])
{
	for (int i = 0; i < 100; i++) {
		strcpy(in[i].name, name[rand() % 3]);
		strcpy(in[i].tel, tel[rand() % 3]);
		strcpy(in[i].addr, addr[rand() % 3]);
		strcpy(in[i].job, job[rand() % 3]);
		strcpy(in[i].birth, birth[rand() % 3]);
		strcpy(in[i].choice.name, cname[rand() % 3]);
		strcpy(in[i].choice.color, color[rand() % 3]);
		strcpy(in[i].choice.office, office[rand() % 3]);
		in[i].choice.price = price[rand() % 3];
		in[i].choice.year = year[rand() % 3];
	}
	printf("���������� �Է� �Ǿ����ϴ�.\n");
}
void show_customer(struct client out[])
{
	for (int i = 0; i < 100; i++) {
		printf("��ȣ: %d\n", i + 1);
		printf("����: %s\n", out[i].name);
		printf("��ȭ��ȣ: %s\n", out[i].tel);
		printf("�ּ�: %s\n", out[i].addr);
		printf("����: %s\n", out[i].job);
		printf("����: %s\n", out[i].birth);
		printf("������: %s\n", out[i].choice.name);
		printf("����: %d\n", out[i].choice.price);
		printf("����: %d\n", out[i].choice.year);
		printf("����: %s\n", out[i].choice.color);
		printf("������: %s\n", out[i].choice.office);
		printf("\n");
	}
}
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
	struct car choice;	// ��������
};

int main()
{
	/*	����3)	< ���� �� ���� ���α׷� v1.0 >
				1. �� ����, ���� ���� ����ü �� (Ŭ������ Ȯ��)
				2. ��: �̸�, ��ȭ��ȣ, �ּ�, ����, ����
				3. ����: �𵨸�, ����, ����, ����, ������
				4. 10���� �� ������ �迭���� �����ϰ� �����Ͽ� �Է� �� ���.	*/
	
	// �� ����
	char* name[3] = { "�Ͽ���", "�̿���", "�￹��" };
	char* tel[3] = { "010-1234-0001", "010-1234-0001", "010-1234-0001" };
	char* addr[3] = { "�޳���", "�޳���", "�޳���" };
	char* job[3] = { "�л�", "������", "����" };
	char* birth[3] = { "5��5��", "11��11��", "12��25��" };
	// ���� ����
	char* cname[3] = { "������", "�θ���", "������" };
	char* color[3] = { "��ũ", "����", "��Ʈ" };
	char* office[3] = { "�ٴ帶��", "�ջ�", "�޵���" };
	int price[3] = { 10000, 200000, 3000000 };
	int year[3] = { 2000, 2010, 2020 };

	struct client cl_arr[10] = { 0 };	
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		strcpy(cl_arr[i].name, name[rand() % 3]);
		strcpy(cl_arr[i].tel, tel[rand() % 3]);
		strcpy(cl_arr[i].addr, addr[rand() % 3]);
		strcpy(cl_arr[i].job, job[rand() % 3]);
		strcpy(cl_arr[i].birth, birth[rand() % 3]);
		strcpy(cl_arr[i].choice.name, cname[rand() % 3]);
		strcpy(cl_arr[i].choice.color, color[rand() % 3]);
		strcpy(cl_arr[i].choice.office, office[rand() % 3]);
		cl_arr[i].choice.price = price[rand() % 3];
		cl_arr[i].choice.year = year[rand() % 3];
	}

	for (int i = 0; i < 10; i++) {
		printf(">>> %s ���� �� ���� <<<\n", cl_arr[i].name);
		printf("��ȭ��ȣ: %s\n", cl_arr[i].tel);
		printf("�ּ�: %s\n", cl_arr[i].addr);
		printf("����: %s\n", cl_arr[i].job);
		printf("����: %s\n", cl_arr[i].birth);
		printf("������: %s\n", cl_arr[i].choice.name);
		printf("����: %d\n", cl_arr[i].choice.price);
		printf("����: %d\n", cl_arr[i].choice.year);
		printf("����: %s\n", cl_arr[i].choice.color);
		printf("������: %s\n", cl_arr[i].choice.office);
		printf("\n");
	}	
}
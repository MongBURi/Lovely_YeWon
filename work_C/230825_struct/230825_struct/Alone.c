#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct professor {
	char name[20];
	char major[20];
	int age;
};

struct student {
	char name[20];
	char tel[20];
	int age;
	char addr[100];
	struct professor pro;
};

int main()
{
	/*	����)	1. �л� ���� ����ü �����
				2. �л� ������ �̸�, �޴�����ȣ, ����, �ּҰ� ����.
				3. 100���� �л� ������ �����ϰ� �����Ͽ� ���.
				4. �������� �迭�� ���� �����ϰ� �����ϰ� �ҷ����� ó��.		*/

	char* name[5] = { "�Ͽ���", "�̿���", "�￹��", "�翹��", "������" };
	char* tel[5] = { "010-1234-0001", "010-1234-0002", "010-1234-0003", "010-1234-0004", "010-1234-0005" };
	int age[5] = { 10,20,30,40,50 };
	char* addr[5] = { "����", "��⵵", "��û��", "����", "���" };
	
	struct student arr[100] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		strcpy(arr[i].name, name[rand() % 5]);
		strcpy(arr[i].tel, tel[rand() % 5]);
		arr[i].age = age[rand() % 5];
		strcpy(arr[i].addr, addr[rand() % 5]);		
	}

	for (int i = 0; i < 100; i++) {
		printf("%d��° �л� ����\n", i + 1);
		printf("�̸�: %s\n", arr[i].name);
		printf("��ȣ: %s\n", arr[i].tel);
		printf("����: %d\n", arr[i].age);
		printf("�ּ�: %s\n", arr[i].addr);
		printf("--------------------\n");
	}

	arr[0].pro.age = 30;
	strcpy(arr[0].pro.name, "�ڱ���");
	printf("%s �л��� ��� ����:%c\n", arr[0].name, arr[0].pro.name);

}
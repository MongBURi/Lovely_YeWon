#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct profrssor {	// �л� ��� ����
	char name[20];	// ������
	char major[20];	// ��������
	int age;		// ��������
};

struct student {
	char name[20];	// �л���
	char tel[20];	// ��ȭ��ȣ
	int age;		// �л�����
	char addr[100];	// �ּ�
	struct profrssor pro;	// ��米��	// ���� ������ ���� �־�� ���� ����
};

int main()
{
	/*	����)	1. �л� ���� ����ü �����
				2. �л� ������ �̸�, �޴�����ȣ, ����, �ּҰ� ����.
				3. 100���� �л� ������ �����ϰ� �����Ͽ� ���.
				4. �������� �迭�� ���� �����ϰ� �����ϰ� �ҷ����� ó��.		*/
				/*	ex)
				struct student st;
				strcpy(st.name, name[2]);
				printf("st.name:%s\n", st.name);	*/

	char* name[5] = { "�Ͽ���", "�̿���", "�￹��", "�翹��", "������" };	
	char* tel[5] = { "010-1234-0001", "010-1234-0002", "010-1234-0003",
		"010-1234-0004", "010-1234-0005" };
	int age[5] = { 10,20,30,40,50 };
	char* addr[5] = { "����", "��⵵", "��û��", "����", "���" };
 	
	struct student st[100] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		strcpy(st[i].name, name[rand() % 5]);
		strcpy(st[i].tel, tel[rand() % 5]);
		strcpy(st[i].addr, addr[rand() % 5]);
		st[i].age = age[rand() % 5];
	}

	for (int i = 0; i < 100; i++) {
		printf(">>> %d��° �л����� <<<\n", i + 1);
		printf("�̸�:%s\n", st[i].name);
		printf("��ȣ:%s\n", st[i].tel);
		printf("�ּ�:%s\n", st[i].addr);
		printf("����:%d\n", st[i].age);
		printf("-------------------------\n");
	}

	st[0].pro.age = 50;	// ù ��° �л��� ��米�� ����.
	strcpy(st[0].pro.name, "�ڱ���");	// ù ��° �л��� ��米�� �̸�.
	printf("%s �л��� ��� ����:%s\n", st[0].name, st[0].pro.name);
	
}
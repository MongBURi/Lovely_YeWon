#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // ���ڿ� ó�� ����

struct person {		// ����ü ���� (���Ƿδ� �������� �ʴ´�)
	char name[20];	// 20������ �Ѿ�� ©��
	char tel[20];
	int age;
};

int main()
{
	struct person man1, man2;	// ����ü ���� man1, man2
	// '�ȼ���'�� man1, name�� ����
	strcpy(man1.name, "�ȼ���");			// "��Ʈ��ī��": ���ڿ� ���� ���
	strcpy(man1.tel, "010-1234-5678");
	man1. age = 23;

	printf("�̸� �Է�: ");	scanf("%s", man2.name);	// �迭�������� '&'�� �ʿ� ����
	printf("��ȣ �Է�: ");	scanf("%s", man2.tel);
	printf("���� �Է�: ");	scanf("%d", &(man2.age));	// ������ '&'�� �ʿ�
	
	printf("�̸�: %s \n", man1.name);
	printf("��ȣ: %s \n", man1.tel);
	printf("����: %d \n", man1.age);
	
	printf("�̸�: %s \n", man2.name);
	printf("��ȣ: %s \n", man2.tel);
	printf("����: %d \n", man2.age);

}
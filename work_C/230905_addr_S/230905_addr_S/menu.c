#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "menu.h"	// ���� ���� ��������� ""(�ֵ���ǥ)��� ��.
					// menu.c�� menu.h�� ������ ������ �����Ѵٴ� ��. ex) "app/menu.h"�̻��� ���
int main_menu()
{
	printf("=============================\n");
	printf("�ּҷ� ���� ���α׷� v1.0\n");
	printf("-----------------------------\n");
	printf("1.�ּҷ� �ڵ� ����\n");
	printf("2.�ּҷ� ���� �Է�\n");
	printf("3.�ּҷ� ��ü ����\n");
	printf("4.�ּҷ� ����\n");
	printf("5.�ּҷ� �˻��ϱ�\n");	// �˻�: ��ȭ,�̸��� (����޴�)
	printf("6.�ּҷ� �����ϱ�\n");
	printf("7.�ּҷ� �����ϱ�\n");
	printf("8.����\n");
	printf("=============================\n");
	printf("�޴� ����:");
	int menu;
	scanf("%d", &menu);
	return menu;
}

int search_menu()
{
	printf("=============================\n");
	printf("������ �˻�\n");
	printf("-----------------------------\n");
	printf("1.�̸� �˻��ϱ�.\n");
	printf("2.���̵� �˻��ϱ�.\n");
	printf("3.�̸��� �˻��ϱ�.\n");
	printf("4.���� �޴� �ǵ��ư���\n");	
	printf("=============================\n");
	printf("�޴� ����:");
	int menu;
	scanf("%d", &menu);
	return menu;
}
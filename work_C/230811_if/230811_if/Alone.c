#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	 ����1
	 1���� ���ڸ� �Է¹޾Ƽ� ¦��, Ȧ������ üũ�ϴ� ���α׷�.
	 ������ ������ Ȱ��	*/
	/*
	int num;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);

	int i = num % 2;
	if (i <= 0) {
		printf("%d�� ¦���̴�. \n", num);
	}
	else {
		printf("%d�� Ȧ���̴�. \n", num);
	}	*/

	/*
	 ��)
	 2���� ���ڸ� �Է¹޾Ƽ� ũ��, �۴�, ���ٸ� üũ�ϴ� ���α׷�.	*/
	/*
	int n1, n2;
	printf("ù ��° ���� �Է�: ");
	scanf("%d", &n1);
	printf("�� ��° ���� �Է�: ");
	scanf("%d", &n2);

	if (n1 < n2) {
		printf("%d�� %d���� �۴�. \n", n1, n2);
	}
	else if (n1 > n2) {
		printf("%d�� %d���� ũ��. \n", n1, n2);
	}
	else if (n1 = n2) {
		printf("%d�� %d�� ����. \n", n1, n2);
	}	*/

	/*
	 ��)
	 ����, ����, ���� ������ �Է¹޾Ƽ� ����, ���, ������ ���ϴ� ���α׷�.
	 ����: 100~90��:A����, 89~80:B����, ... 59~0:F����
	 A, B, C, D, F����
	 if (90 <= num <= 100) -> (num >= 90 && num <= 100)	*/
	/*
	int kor, eng, math, total = 0;
	float avg = 0;

	printf("���� ���� �Է�: ");
	scanf("%d", &kor);
	printf("���� ���� �Է�: ");
	scanf("%d", &eng);
	printf("���� ���� �Է�: ");
	scanf("%d", &math);

	printf("����: %d�� \n", total = kor + eng + math);
	printf("���: %.1f�� \n", avg = total / 3);

	if (avg >= 90 && avg <= 100) {
		printf("A ���� \n");
	}
	else if (avg >= 80 && avg <= 89) {
		printf("B ���� \n");
	}
	else if (avg >= 70 && avg <= 79) {
		printf("C ���� \n");
	}
	else if (avg >= 60 && avg <= 69) {
		printf("D ���� \n");
	}
	else {
		printf("F ���� \n");
	}	*/



	/*
	��) �Ʒ��� �޴��� �����Ͽ� ���.
	����1. �޴� ������ ���ڷ� �Է� ó��.
	����2. ���α׷� ����� �Ʒ��� ���� �������� �ϱ� �ٶ�
	-------------------------
	�Ĵ� �޴� �ڵ� �ֹ� ���α׷� v1.0
	-------------------------
	a. ��ġ�	: 5,000��
	b. �����	: 5,000��
	c. Į����	: 4,500��
	d. ��ġ����	: 4,000��
	e. �����	: 5,000��
	-------------------------
	�޴��� ���� : c
	������� �ֹ��߽��ϴ�.	*/
	/*
	while (1) {
		system("cls");
		printf("------------------------- \n");
		printf("�Ĵ� �޴� �ڵ� �ֹ� ���α׷� v1.0 \n");
		printf("------------------------- \n");
		printf("a. ��ġ�	: 5,000�� \n");
		printf("b. �����	: 5,000�� \n");
		printf("c. Į����	: 4,500�� \n");
		printf("d. ��ġ����	: 4,000�� \n");
		printf("e. �����	: 5,000�� \n");
		printf("x. ���α׷� ���� \n");
		printf("------------------------- \n");

		char menu;
		printf("�޴��� ���� : ");
		scanf(" %c", &menu);

		switch (menu) {
		case 'a':
			printf("��ġ��� �ֹ��߽��ϴ�. \n"); break;
		case 'b':
			printf("������� �ֹ��߽��ϴ�. \n"); break;
		case 'c':
			printf("Į������ �ֹ��߽��ϴ�. \n"); break;
		case 'd':
			printf("��ġ������ �ֹ��߽��ϴ�. \n"); break;
		case 'e':
			printf("������� �ֹ��߽��ϴ�. \n"); break;
		case 'x':
			printf("���� �����մϴ�. \n");
			exit(0);
		}
		system("pause");
	}	*/


	/*
	��)
	-------------------------
	���� ���Ǳ� ���α׷� v1.0
	-------------------------
	1. ���� ���� : 6,000��
	2. �ٳ��� ���� : 5,000��
	3. ���� ���� : 4,500��
	4. �޷� ���� : 4,500��
	5. Ŀ�� ���� : 4,000��
	-------------------------
	������ �����ϼ��� : 5
	Ŀ�� ������ �����ϼ̽��ϴ�.
	-------------------------
	���� �ݾ��� �Ա��ϼ���. = > 10000
	Ŀ�� ������ �����߽��ϴ�. �Ž����� 5,500���� ��������.	*/
	printf("------------------------- \n");
	printf("���� ���Ǳ� ���α׷� v1.0 \n");
	printf("------------------------- \n");
	printf("1. ���� ����	: 6,000�� \n");
	printf("2. �ٳ��� ����	: 5,000�� \n");
	printf("3. ���� ����	: 4,500�� \n");
	printf("4. �޷� ����	: 4,500�� \n");
	printf("5. Ŀ�� ����	: 4,000�� \n");
	printf("0. ���α׷� ���� \n");
	printf("------------------------- \n");
	int menu;
	do {		
		printf("������ �����ϼ���:  ");
		scanf("%d", &menu);
	} while (menu <= 0 || menu > 5);

	switch (menu) {
	case 1:
		printf("���� ������ �����ϼ̽��ϴ�. \n"); break;
	case 2:
		printf("�ٳ��� ������ �����ϼ̽��ϴ�. \n"); break;
	case 3:
		printf("���� ������ �����ϼ̽��ϴ�. \n"); break;
	case 4:
		printf("�޷� ������ �����ϼ̽��ϴ�. \n"); break;
	case 5:
		printf("Ŀ�� ������ �����ϼ̽��ϴ�. \n"); break;
	case 0:
		printf("���� �����մϴ�. \n");
		exit(0);
	}
	printf("------------------------- \n");

	int money;
	printf("���� �ݾ��� �Ա��ϼ���. : ");
	scanf("%d", &money);

	switch (menu) {
	case 1:
		printf("���� ������ �����߽��ϴ�. �Ž����� %d���� ��������. \n", money -= 6000); break;
	case 2:
		printf("�ٳ��� ������ �����߽��ϴ�. �Ž����� %d���� ��������. \n", money -= 5000); break;
	case 3:
		printf("���� ������ �����߽��ϴ�. �Ž����� %d���� ��������. \n", money -= 4500); break;
	case 4:
		printf("�޷� ������ �����߽��ϴ�. �Ž����� %d���� ��������. \n", money -= 4500); break;
	case 5:
		printf("Ŀ�� ������ �����߽��ϴ�. �Ž����� %d���� ��������. \n", money -= 4000); break;
	}

}
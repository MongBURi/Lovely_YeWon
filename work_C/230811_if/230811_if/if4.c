#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	// if2.c ���� if�� ��� ������ else if�� else�� ���
int main()
{
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����? ");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1) {
		result = num1 + num2;
	}
	else if (opt == 2) {
		result = num1 - num2;
	}
	else if (opt == 3) {
		result = num1 * num2;
	}
	else {
		result = num1 / num2;
	}

	printf("���: %.1f \n", result);

}
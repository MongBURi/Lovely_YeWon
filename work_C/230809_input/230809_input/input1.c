#define _CRT_SECURE_NO_WARNINGS // scanf�Լ� ����ϱ� ����
#include <stdio.h>

int main()
{
	int result;
	int num1, num2;
	printf("���� one: ");
	// �ֽ� ���־� ��Ʃ��������� scanf�� ���Ұ�.
	// scanf_s ��� �Լ��� ��ü�Ǿ���.
	// ������ c��� ǥ���Լ��� scanf�� ����.
	scanf("%d", &num1);
	printf("���� two: ");
	scanf("%d", &num2);
	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);

}
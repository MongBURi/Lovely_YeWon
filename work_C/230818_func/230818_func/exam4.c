#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int showNumber(int n1, int n2, char c);

int main()
{
	/*
	����4)	1. ���� 2���� ��Ģ�����ڸ� main()���� �Է¹���.
			2. ��Ģ�����ڸ� ���ڷ� �Է¹���. (+, -, x, /)
			3. 3���� ������ �Ű������� ����.
			4. ��� ������� �����Ͽ� main()���� ����ϱ�.
			+) scanf()�Լ����� �����Է� �� ���� �Է½ÿ��� " %c"���	*/
	int n1, n2;
	char c;	
	printf("ù ��° ������ �Է��ϼ���: ");
	scanf("%d", &n1);
	printf("�� ��° ������ �Է��ϼ���: ");
	scanf("%d", &n2);
	printf("��Ģ�����ڸ� �Է��ϼ���(+, -, x, /): ");
	scanf(" %c", &c);

	int result = showNumber(n1, n2, c);
	/*
	if (c == '+') {
		printf("%d + %d = %d", n1, n2, result);
	}
	else if (c == '-') {
		printf("%d - %d = %d", n1, n2, result);
	}
	else if (c == 'x') {
		printf("%d x %d = %d", n1, n2, result);
	}
	else if (c == '/') {
		printf("%d / %d = %d", n1, n2, result);
	}	*/
	// �� ó�� ���� ��� // �� ������ ���
	printf("�����: %d\n", result);
}

int showNumber(int n1, int n2, char c)
{
	int result = 0;
	if (c == '+') {
		result = n1 + n2;
		// return n1 + n2 �� �̷��� �ᵵ ��. n1+n2���� �����ϸ鼭 show�Լ��� ����!
	}
	else if (c == '-') {
		result = n1 - n2;		
	}
	else if (c == 'x') {
		result = n1 * n2;		
	}
	else if (c == '/') {
		result = n1 / n2;		
	}
	return result;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int n1, int n2);
int sub(int n1, int n2);

int main()
{
	// ���ϰ��� ������Ÿ�� �Լ���(�Ű�����, ...)
	int n1 = 200;	// ��������, add(n1,n2)�� sub(n1,n2)�ʹ� ����
	int n2 = 50;

	/*	add()�Լ� ȣ���ؼ� ���ϰ��� main���� ���
		sub()�Լ� ȣ���ؼ� ���ϰ��� main���� ���	*/	
	int a = add(n1, n2);
	printf("���Ϲ��� add�Լ� ��: %d\n", a);	
	int b = sub(n1, n2);
	printf("���Ϲ��� sub�Լ� ��: %d\n", b);
	printf("���Ϲ��� sub�Լ� ��: %d\n", sub(n1, n2));
}

int add(int n1, int n2)	// �� ������ �� ȣ������ �� ���� ä����.
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	int res = n1 - n2;
	return res;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 10;
	printf("1.num (������ ����� ��): %d\n", num);
	printf("1.num (num������ ���� �ּҰ�): 0x%p\n", &num);

	// �����ͺ��� pnum�� num������ �ּҰ� ����.
	int* pnum = &num;
	printf("2.*pnum (����� �ּҿ� ����ִ� ��): %d\n", *pnum);

	*pnum = 20; // num = 20;�� ����.
	printf("3.*pnum (����� �ּҿ� ����ִ� ��): %d\n", *pnum);

	printf("4.*num (������ ����� ��): %d\n", num);
	printf("5.pnum (pnum������ ����� �ּҰ�): 0x%p\n", pnum);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_num(int num);

int main()
{
	/*
	����1)	1~5���� ���������� �Ű������� �����Ͽ� ����ϴ� �Լ� �ۼ�.
			�Լ���: show_num()	*/
			/*
	show_num(1);
	show_num(2);
	show_num(3);
	show_num(4);
	show_num(5);	*/
			// �� ���ڰ� Ŀ���� �ݺ����� ȿ�����̴�.

	for (int i = 1; i <= 5; i++) {
		show_num(i);
	}
}

void show_num(int n)
{
	// int n = 10;		�ϳ��� �Լ� �ȿ� ���� ���� ���� �� �� �� ����.
	printf("���޵� �Լ� ��: %d\n", n);
}
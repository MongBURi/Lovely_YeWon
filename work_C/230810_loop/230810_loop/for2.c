#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int total = 0;
	int i, num;
	printf("0���� num������ ����, num��? ");
	scanf("%d", &num);

	for (i = 0; i < num + 1; i++) {
		// (i = 1; i <= num; i++) 1���� num�۰ų� ���� ��
		total += i;
	}
	printf("0���� %d������ �������: %d \n", num, total);

}
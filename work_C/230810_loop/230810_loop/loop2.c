#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dan = 0;
	printf("������ �Է�: ");
	scanf("%d", &dan);

	int num = 1;
	while (num < 10) {
		printf("%d x %d = %d \n", dan, num, dan * num);
		num++;
	}
}
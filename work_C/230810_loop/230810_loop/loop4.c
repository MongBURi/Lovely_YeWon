#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int total = 0;
	int num = 0;
	do {
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;					// total = total + num
	} while (num != 0);
	printf("합계: %d \n", total);

}
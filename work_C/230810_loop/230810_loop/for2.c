#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은? ");
	scanf("%d", &num);

	for (i = 0; i < num + 1; i++) {
		// (i = 1; i <= num; i++) 1부터 num작거나 같을 때
		total += i;
	}
	printf("0부터 %d까지의 덧셈결과: %d \n", num, total);

}
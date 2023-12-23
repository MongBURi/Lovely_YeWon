#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	문제4-1)	3개의 숫자를 입력받아서 홀수, 짝수 구분하기.
			조건) 반복문을 사용해서 입력받기.	*/
			/*
	for (int i = 0; i < 3; i++) {
		printf("숫자 %d 입력: ", i + 1);
		int n;
		scanf("%d", &n);
		if (n % 2 == 0) {
			printf("%d는 짝수이다. \n", n);
		}
		else {
			printf("%d는 홀수이다. \n", n);
		}
	}	*/
		

	/*
	문제4-2)	1~100까지의 숫자 중에서 5의 배수만 출력하기.
			조건) 반복문 for, while 사용하기	*/
			/*
	int i = 1;
	while (i <= 100) {
		if (i % 5 == 0) {
			printf("%d ", i);
		}		
		i++;		
	}
	printf("\n=========================\n");
	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			printf("%d ", i);
		}
	}	*/


}
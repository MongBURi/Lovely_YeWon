#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	ㄱ)	1개의 숫자를 입력받아 구구단 출력하는 프로그램.
	예) 3을 입력하면 구구단 3단 출력.	*/
	/*
	int num;
	printf("단을 입력하세요: ");
	scanf("%d", &num);

	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d \n", num, i, num * i);
	}	*/

	/*
	ㄴ)	시작값과 마지막값을 입력받아 합 구하는 프로그램.
	예) 1번째 입력:2, 2번째 입력:5
	    2+3+4+5 = 14
	조건) 만약에 2번째 수가 1번째 수보다 작거나 같으면 다시 입력.	*/
	/*
	int n1, n2, total = 0;

	printf("첫 번째 값을 입력하세요: ");
	scanf("%d", &n1);

	do {
		printf("두 번째 값을 입력하세요: ");
		scanf("%d", &n2);
	} while (n2 <= n1);

	for (int i = n1; i <= n2; i++) {
		total += i;
	}
	printf("%d ~ %d까지의 합: %d \n", n1, n2, total);	*/

	/*
	ㄷ)	구구단 전체 출력. (2~9단 출력)
	2x1=2  3x1=3  4x1=4 ... 9x1=9
	2x2=4  3x2=6  4x2=8 ... 9x2=18
	...
	2x9=18 3x9=27 4x9=36 ... 9x9=81	*/
	/*
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%d x %d = %d \t", j, i, j * i);
		}
		printf("\n");
	}	*/
	
	/*
	ㄱ) 5개의 숫자를 입력받아서 홀수, 짝수를 구분하는 프로그램
	조건1) for, while, do-while 사용
	------------------------------
	짝수, 홀수 구분 프로그램 v1.0
	------------------------------
	1. Num1 → 6
	짝수입니다.
	2. Num2 → 71
	홀수입니다.
	3. Num3 → 34
	짝수입니다.
	...
	5. Num5 → 23
	홀수입니다.
	*/
		









}
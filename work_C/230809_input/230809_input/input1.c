#define _CRT_SECURE_NO_WARNINGS // scanf함수 사용하기 위해
#include <stdio.h>

int main()
{
	int result;
	int num1, num2;
	printf("정수 one: ");
	// 최신 비주얼 스튜디오에서는 scanf를 사용불가.
	// scanf_s 라는 함수로 대체되었음.
	// 하지만 c언어 표준함수는 scanf가 맞음.
	scanf("%d", &num1);
	printf("정수 two: ");
	scanf("%d", &num2);
	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int opt;
	double num1, num2;	// float써도 되지만 double이 표현할 수 있는 게 큼
	double result;		// double=%lf

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1) {
		result = num1 + num2;
	}
	if (opt == 2) {
		result = num1 - num2;
	}
	if (opt == 3) {
		result = num1 * num2;
	}
	if (opt == 4) {
		result = num1 / num2;
	}
	
	printf("결과: %.1f \n", result);

}
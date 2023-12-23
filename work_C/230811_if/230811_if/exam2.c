#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	문제2-1)	간단한 계산기. (if, switch 둘 다 가능)
			1. 2개의 숫자를 입력받고, 문자 +, -, *, /를 입력받음.
			2. 출력 형태는 아래 참고.	
				>>>>> 입력 예시 <<<<<		>>>>> 출력 예시 <<<<<
				첫 번째 숫자 입력: 10			10 + 5 = 15
				두 번째 숫자 입력: 20
				연산자 입력(+,-,*,/): +	*/
			/*
	int n1 = 0, n2 = 0;
	char c1 = 0;	
	printf("1번째 숫자 입력: ");
	scanf("%d", &n1);
	printf("2번째 숫자 입력: ");
	scanf("%d", &n2);
	printf("연산자 입력(+,-,*,/): ");
									// ※바로 위에서 숫자를 입력하고 엔터키를 치면 엔터키값이
									//   c1변수에 자동의 저장되어지는 오류 발생. (항상 발생함)
									// 해결방법: " %c" → %c 앞에 공백을 1칸 넣음.
	scanf(" %c", &c1);

	if (c1 == '+') {
		printf("if %d + %d = %d", n1, n2, n1 + n2);
	}
	else if (c1 == '-') {
		printf("if %d - %d = %d", n1, n2, n1 - n2);
	}
	else if (c1 == '*') {
		printf("if %d x %d = %d", n1, n2, n1 * n2);
	}
	else {
		printf("if %d ÷ %d = %d", n1, n2, n1 / n2);
	}	*/

			/*
	int n1 = 0, n2 = 0;
	char c1 = 0;
	printf("1번째 숫자 입력: ");
	scanf("%d", &n1);
	printf("2번째 숫자 입력: ");
	scanf("%d", &n2);
	printf("연산자 입력(+,-,*,/): ");	
	scanf(" %c", &c1);

	switch (c1) {
	case '+':
		printf("sw %d + %d = %d", n1, n2, n1 + n2);
		break;
	case '-':
		printf("sw %d - %d = %d", n1, n2, n1 - n2);
		break;
	case '*':
		printf("sw %d x %d = %d", n1, n2, n1 * n2);
		break;
	case '/':
		printf("sw %d ÷ %d = %d", n1, n2, n1 / n2);
		break;
	}	*/
	

	/*
	문제2-2)	윤년 구분하는 프로그램 (if만 가능)
			1. 입력한 년도를 4로 나누면 나머지가 0이고, 100으로 나누면 0이 아님. → 윤년
			2. 입력한 년도를 400으로 나누면 나머지가 0 → 윤년
			윤년: 2024, 2020
			윤년 아님: 2025, 2023, 2022, 2021, 2019	*/
			/*
	int y;
	printf("연도를 입력: ");
	scanf("%d", &y);

	if (y % 4 == 0 && y % 100 != 0) {
		printf("%d년은 윤년이다 \n", y);
	}
	else if (y % 400 == 0) {
		printf("%d년은 윤년이다 \n", y);
	}
	else {
		printf("%d년은 윤년이 아니다 \n", y);
	}
	//						↓↓↓↓↓	한 줄로 통으로 묶을 수 있따
	/*if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
		printf("%d년은 윤년이다 \n", y);
	}
	else {
		printf("%d년은 윤년이 아니다 \n", y);
	}	*/

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int showNumber(int n1, int n2, char c);

int main()
{
	/*
	문제4)	1. 정수 2개와 사칙연산자를 main()에서 입력받음.
			2. 사칙연산자를 문자로 입력받음. (+, -, x, /)
			3. 3개의 정보를 매개변수로 전달.
			4. 계산 결과값을 리턴하여 main()에서 출력하기.
			+) scanf()함수에서 숫자입력 후 문자 입력시에는 " %c"사용	*/
	int n1, n2;
	char c;	
	printf("첫 번째 정수를 입력하세요: ");
	scanf("%d", &n1);
	printf("두 번째 정수를 입력하세요: ");
	scanf("%d", &n2);
	printf("사칙연산자를 입력하세요(+, -, x, /): ");
	scanf(" %c", &c);

	int result = showNumber(n1, n2, c);
	/*
	if (c == '+') {
		printf("%d + %d = %d", n1, n2, result);
	}
	else if (c == '-') {
		printf("%d - %d = %d", n1, n2, result);
	}
	else if (c == 'x') {
		printf("%d x %d = %d", n1, n2, result);
	}
	else if (c == '/') {
		printf("%d / %d = %d", n1, n2, result);
	}	*/
	// ↑ 처음 적은 답안 // ↓ 선생님 답안
	printf("결과값: %d\n", result);
}

int showNumber(int n1, int n2, char c)
{
	int result = 0;
	if (c == '+') {
		result = n1 + n2;
		// return n1 + n2 → 이렇게 써도 됨. n1+n2값을 리턴하면서 show함수는 종료!
	}
	else if (c == '-') {
		result = n1 - n2;		
	}
	else if (c == 'x') {
		result = n1 * n2;		
	}
	else if (c == '/') {
		result = n1 / n2;		
	}
	return result;
}
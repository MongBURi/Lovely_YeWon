#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gugu(int n);

int main()
{
	/*
	문제5)	1. 구구단을 출력하는 숫자를 main()에서 입력 받음.
			2. 예) 3을 입력받아 매개변수로 전달하면 3단 출력.
			3. 입력받은 숫자를 매개변수로 전달하여 함수에서 구구단 출력.	*/
	printf("단을 입력하세요: ");
	int n;
	scanf("%d", &n);
	gugu(n);
}

void gugu(int n)
{
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", n, i, n * i);		
	}	
}
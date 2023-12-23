#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_num(int num);

int main()
{
	/*
	문제1)	1~5까지 연속적으로 매개변수로 전달하여 출력하는 함수 작성.
			함수명: show_num()	*/
			/*
	show_num(1);
	show_num(2);
	show_num(3);
	show_num(4);
	show_num(5);	*/
			// ↓ 숫자가 커지면 반복문이 효율적이다.

	for (int i = 1; i <= 5; i++) {
		show_num(i);
	}
}

void show_num(int n)
{
	// int n = 10;		하나의 함수 안에 같은 변수 여러 개 쓸 수 없다.
	printf("전달된 함수 값: %d\n", n);
}
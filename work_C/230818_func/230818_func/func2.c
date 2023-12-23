#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_number(int n);
void show_number2(int n, int n2);

int main()
{
	/*	void 함수명() → (void: 생략 가능)
		void 함수명(매개변수, ...n개)	*/

	/*
	※ 중요 ※
	매개변수가 있는 함수를 호출할 경우
	반드시 ()안에 매개변수로 전달하는 값을 넣어줘야 함	*/
	show_number(100);		
	int n = 100;
	int n2 = 200;
	show_number2(n, n2);	// (show_number2(100, 200);와 같은 의미)
}

	/*
	코딩 스타일
	스네이크 방식: show_number → C언어
	카멜 방식: showNumber → 자바 (객체지향)
	파스칼 방식: ShowNumber → C++, C# (객체지향)	*/

void show_number(int n)		// 매개변수(인수,인자)가 있는 함수 정의
{
	int sum = n + 100;
	printf("함수의 변수 sum: %d\n", sum);
}

void show_number2(int n, int n2)		// 매개변수가 있는 함수 정의
{
	int sum = n + n2;
	printf("함수의 변수2 sum: %d\n", sum);
}

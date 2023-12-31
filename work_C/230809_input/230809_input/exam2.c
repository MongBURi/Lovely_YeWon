#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 동전 교환기 프로그램 만들기
	// 동전은 각각 500원, 100원, 50원, 10원이 사용됨.
	// 동전의 각각의 갯수를 저장할 변수들을 만들고 초기값 0으로 설정.
	// 특정 금액을 입력받으세요. (예: 1370)
	// 지폐를 500원 동전 갯수 구함.
	// 나머지 금액이 있으면 100원 동전 갯수 구함.
	// 나머지 금액이 있으면 50원 동전 갯수 구함.
	// 나머지 금액이 있으면 10원 동전 갯수 구함.
	// 반드시 아래와 같은 형태로 출력하기 바람.

	int c500 = 0;
	int c100 = 0;
	int c50 = 0;
	int c10 = 0;
	int in = 0;	// 입력받는 금액
	int put = 0; // 나머지 금액

	printf("금액을 투입하세요: ");
	scanf("%d", &in);

	c500 = in / 500; // 500으로 나눈 몫(개수)
	put = in % 500;
	// 디버깅 작업 (coin500 변수에 들어갈 값을 확인)
	// printf("500원 동전 개수: %d\n", c500);
	// printf("500원 나머지: %d\n", put);

	c100 = put / 100;
	put = put % 100;
	c50 = put / 50;
	put = put % 50;
	c10 = put / 10;
	put = put % 10;

	printf("--------------------\n");
	printf("동전 교환기 프로그램 v1.0\n");
	printf("--------------------\n");
	printf("오백원 갯수 : %d개\n", c500);
	printf("백원 갯수 : %d개\n", c100);
	printf("오십원 갯수 : %d개\n", c50);
	printf("십원 갯수 : %d개\n", c10);
	printf("바꾸지 못한 잔돈 : %d개\n", put);
	printf("--------------------\n");

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void greeting();		// main함수 아래에 정의가 있다는 것을 알려줌(컴파일러에게)
						//			→ '프로토타입 선언(함수의 선언)'
int main()				// 메인함수: 프로그램에 하나만 존재해야 함.
{
	greeting();			// greeting 함수의 정의를 호출함
	printf("main함수의 다른 동작\n");
	greeting();			// 함수의 호출은 다른 함수의 정의에서 가능함
}

/*
	※ 주의사항 ※
함수의 정의는 실행되지 못함
→ 사용하기 위해서는 다른 함수에서 해당 함수 호출이 필요함.	*/

void greeting()			// 내가 만든 함수(사용자 정의 함수)의 정의
{	
	printf(">>>> 함수 시작 <<<<\n");
	printf("안녕하세요\n");
	printf("반갑습니다\n");
	printf(">>>> 함수 종료 <<<<\n");
}

void greeting2()
{
	greeting();
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void call_by_val(int a, int b);

int main()
{
	/*			◆ call by value (값에 의한 전달)와
				◇ call by address (주소값에 의한 전달) 이해하기.	*/
	
	int a = 10;
	int b = 20;
	call_by_val(a, b);
	printf("main() → a:%d, b:%d\n", a, b);
	/*	변수에 값을 하나하나 던져주고 바꾸기 때문에
		call_by_val()함수가 소멸됨과 동시에 값도 소멸한다. (값이 가벼움)
		그래서 메인에서 다시 출력해도 원래 정의된 값이 나온다.	*/
}

void call_by_val(int a, int b)
{
	// a와 b의 값을 서로 바꿔치기
	int temp = a;	// a의 값을 temp(임시변수)에 백업
	a = b;
	b = temp;
	printf("call_by_val() → a:%d, b;%d\n", a, b);
}	// 함수 소멸과 함께 지역변수(안에 든 값)들도 같이 소멸된다.
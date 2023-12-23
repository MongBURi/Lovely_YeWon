#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void test_func();

/*	전역변수	1.파일 내의 모든 함수에 값을 전달할 수 있다.
			2.하지만 함수간의 값 전달은 매개변수 사용을 우선한다.
			※ 주의) 전역변수는 무조건 함수 밖에서 선언해야한다.
					   ┗>디버깅하기 힘들다. (값을 추적하기가 매우 어려움)	*/

int a = 100;									// 전역변수 a
int b = 100;

int main()
{
	int a = 10;									// main() 지역변수 a
	printf("main() → a:%d b:%d\n", a, b);		// → 여기서 a값은 자신과 가장 가까운 main() a값이 온다.
	b = 200;			// 전역변수를 바꿔버리면 다른 모든 함수에 영향을 끼침.
	test_func();
}

void test_func()
{
	int a = 20;									// test_func() 지역변수 a
	printf("test_func() → a:%d b:%d\n", a, b);	// b에 100을 넣고 싶었지만 main()에서 b=200으로 바꾸는 바람에 200값이 전해짐.
}

// 실무에서 전역변수명a, main()지역변수명a, test_func()지역변수명a 이렇게 동일하게 쓰면 안 됨.
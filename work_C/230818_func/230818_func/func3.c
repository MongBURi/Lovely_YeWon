#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_number();
char get_char();

int main() // 'void main()' → 이렇게 사용해도 상관없음
{
	// "'반환값의 데이터타입' '함수명()' '{return값}'"
	int n = get_number();			// return한 200의 값을 변수 n에 저장.
	printf("리턴받은 값: %d\n", n);

	char c = get_char();
	printf("리턴받은 문자: %c\n", c);
	/*						똑같지만 ↑변수를 쓰는 것이 디버깅 할 때 좋음.
				↓↓↓↓↓		변수를 사용해서 리턴값을 받지 않고,
							직접 함수 리턴값을 %c에 전달	*/
	printf("함수 리턴값: %c\n", get_char());
}

int get_number()
{
	int n = 200;
	return n;		// 함수가 종료되기 전에 return값을 호출한 곳으로 되돌려 줌.
					// 리턴값은 오로지 하나의 값만 가능
}

char get_char()
{
	char c = 'B';
	return c;
}

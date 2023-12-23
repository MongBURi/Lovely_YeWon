#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");					// ┓
	scanf("%s", str);						// ┣ 중요: 배열이름 str의 앞에는 &연산자를 붙이지 않는다
	printf("입력 받은 문자열: %s \n", str);	// ┛	&: 주소의 의미를 가짐, 일반변수는 주소의 의미가 없어서 &붙여줘야됨

	printf("문자 단위 출력: ");
	while (str[idx] != '\0') {				// ┓		\0까지
		printf("%c", str[idx]);				// ┣ 참고	한 자씩 출력
		idx++;								// ┛
	}
	printf("\n");

}
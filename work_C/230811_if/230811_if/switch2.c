#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	printf("A ~ E 문자 입력: ");
	scanf("%c", &c);

	switch (c) {
	case 'A':					// 변수가 문자면 case도 '문자'(작은따움표!!)
		printf("A은 ONE \n");
		break;
	case 'B':
		printf("B는 TWO \n");
		break;
	case 'C':
		printf("C은 THREE \n");
		break;
	case 'D':
		printf("D는 FOUR \n");
		break;
	case 'E':
		printf("E는 FIVE \n");
		break;
	default:
		printf("I don't konw! \n");
	}

}
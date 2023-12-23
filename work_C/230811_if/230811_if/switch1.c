#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("1이상 5이하의 정수 입력: ");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("1은 ONE \n");
		break;
	case 2:
		printf("2는 TWO \n");
		break;
	case 3:
		printf("3은 THREE \n");
		break;
	case 4:
		printf("4는 FOUR \n");
		break;
	case 5:
		printf("5는 FIVE \n");
		break;
	default:							// default는 생략 가능
		printf("I don't konw! \n");
	}

}
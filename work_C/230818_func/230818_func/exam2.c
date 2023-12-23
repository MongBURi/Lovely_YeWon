#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_day(int n);

int main()
{
	/*	
	문제2)	'main()에서' 1~7사이의 숫자를 입력받아서 매개변수로 전달하여,
			매개변수의 값이 1이면 월요일 출력, 2이면 화요일 출력, ...
			7이면 일요일을 출력하는 함수 작성.
			함수명: show_day()	*/
	printf("1~7사이의 숫자를 입력하세요: ");
	int num;
	scanf("%d", &num);
	show_day(num);
	
}

void show_day(int n)
{
	switch (n) {
	case 1:
		printf("월요일 \n");	break;
	case 2:
		printf("화요일 \n");	break;
	case 3:
		printf("수요일 \n");	break;
	case 4:
		printf("목요일 \n");	break;
	case 5:
		printf("금요일 \n");	break;
	case 6:
		printf("토요일 \n");	break;
	case 7:
		printf("일요일 \n");	break;
	default:
		printf("잘못된 정보 \n");
	}
}
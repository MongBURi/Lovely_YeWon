#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*	
	문제1)	1~5까지 연속적으로 매개변수로 전달하여 출력하는 함수 작성.
			함수명: show_num()	*/
	

	/*
	문제2)	'main()에서' 1~7사이의 숫자를 입력받아 매개변수로 전달하여,
			매개변수의 값이 1이면 월요일 출력, 2이면 화요일 출력, ...
			7이면 일요일을 출력하는 함수 작성.
			함수명: show_day()	*/
			/*
	printf("1.월요일 2.화요일 3.수요일 4.목요일\n5.금요일 6.토요일 7.일요일\n");
	printf("숫자를 입력하세요: ");
	int week = show_day();
	switch (week) {
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
	default :
		printf("알 수 없음 \n");
	}
}

int show_day()
{
	int num;
	scanf("%d", &num);
	return num;
}	*/


	/*
	문제3)	1. 3개의 정수를 main()에서 입력받아서 한꺼번에 매개변수에 전달.
			2. 함수에서 3개의 숫자를 크기 순서대로 출력.
			3. 함수명: my_sort
			4. if (n1 > n2 > n3): 잘못된 문법
			5. 출력 형태:
				n1이 제일 크고 n2가 두번째 크고 n3가 제일 작음 → (n1 > n2 > n3)
				n3이 제일 크고 n1가 두번째 크고 n2가 제일 작음 → (n3 > n1 > n2)	*/


	/*
	문제4)	1. 정수 2개와 사칙연산자를 main()에서 입력받음.
			2. 사칙연산자를 문자로 입력받음. (+, -, x, /)
			3. 3개의 정보를 매개변수로 전달.
			4. 계산 결과값을 리턴하여 main()에서 출력하기.
			+) scanf()함수에서 숫자입력 후 문자 입력시에는 " %c"사용	*/


	/*
	문제5)	1. 구구단을 출력하는 숫자를 main()에서 입력 받음.
			2. 예) 3을 입력받아 매개변수로 전달하면 3단 출력.
			3. 입력받은 숫자를 매개변수로 전달하여 함수에서 구구단 출력.	*/


	/*
	문제6)	국,영,수 점수를 입력받아서 총점, 평균값을 구하는 프로그램.
			조건1) 점수 입력은 main()에서 입력받음.
			조건2) 입력받는 점수는 0~100사이의 숫자만 입력받도록 조건 체크하기.
					→ 간단하게 한 번만 체크하면 됨(사용자 실수로 잘못 입력하면 에러메세지 출력하고 종료 처리)
			조건3) 국,영,수 점수를 각각의 매개변수로 전달하여 총점, 평균값을 출력하는 함수 작성.
			조건4) 조건3까지 테스트완료 이후에 잘못입력값 체크를 확장하기(실수로 입력하면 재입력 받을 수 있도록 처리)
					→ 시간적인 여유가 있으면 해보고 아니면 패스하기 바람	*/


}



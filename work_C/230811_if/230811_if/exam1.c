#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 관계연산자, 논리연산자가 if문의 조건으로 많이 사용된다.

	/*
	문제1-1)	1개의 숫자를 입력받아서 짝수, 홀수인지 체크하는 프로그램.
			나머지 연산자 (num%2 == 0) -> num을 2로 나눈 나머지가 0과 같다면)	*/
			/*
	printf("숫자를 입력하세요: ");
	int n;
	scanf("%d", &n);
	
	if (n % 2 != 0) {
		printf("입력받은 %d는 홀수. \n", n);
	}
	else {
		printf("입력받은 %d는 짝수. \n", n);
	}	*/


	/*
	문제1-2)	2개의 숫자를 입력받아서 크다, 작다, 같다를 체크하는 프로그램.	*/
			/*
	int n1, n2;
	printf("첫 번째 숫자 입력: ");
	scanf("%d", &n1);
	printf("두 번째 숫자 입력: ");
	scanf("%d", &n2);

	if (n1 > n2) {
		printf("%d은(는) %d보다 크다. \n", n1, n2);
	}
	else if (n1 < n2) {
		printf("%d은(는) %d보다 작다. \n", n1, n2);
	}
	else {
		printf("%d은(는) %d와 같다. \n", n1, n2);
	}	*/


	/*
	문제1-3)	국어, 영어, 수학 점수를 입력받아서 총점, 평균, 학점을 구하는 프로그램.
			학점: 100~90점:A학점, 89~80:B학점, ... 59~0:F학점
			A, B, C, D, F학점
			if (90 <= num <= 100) -> (num >= 90 && num <= 100)
				C에서는 불가능		 논리연산자로 표현해야 됨	*/
			/*
	int kor, eng, math;
	int total = 0, avg = 0;
	printf("국어 점수 입력: ");
	scanf("%d", &kor);
	printf("영어 점수 입력: ");
	scanf("%d", &eng);
	printf("수학 점수 입력: ");
	scanf("%d", &math);

	total = kor + eng + math;
	avg = total / 3;
	if (avg >= 90 && avg <= 100) { // 범위를 표현하는 방법은 논리연산자밖에 없다 "~에서 ~까지"
		printf("총점: %d, 평균: %d => A학점 \n", total, avg);
	}
	else if (avg >= 80 && avg <= 89) {
		printf("총점: %d, 평균: %d => B학점 \n", total, avg);
	}
	else if (avg >= 70 && avg <= 79) {
		printf("총점: %d, 평균: %d => C학점 \n", total, avg);
	}
	else if (avg >= 60 && avg <= 69) {
		printf("총점: %d, 평균: %d => D학점 \n", total, avg);
	}
	else {
		printf("총점: %d, 평균: %d => F학점 \n", total, avg);
	}	*/

}
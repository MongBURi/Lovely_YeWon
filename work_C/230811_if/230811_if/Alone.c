#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	 연습1
	 1개의 숫자를 입력받아서 짝수, 홀수인지 체크하는 프로그램.
	 나머지 연산자 활용	*/
	/*
	int num;
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);

	int i = num % 2;
	if (i <= 0) {
		printf("%d은 짝수이다. \n", num);
	}
	else {
		printf("%d은 홀수이다. \n", num);
	}	*/

	/*
	 ㄴ)
	 2개의 숫자를 입력받아서 크다, 작다, 같다를 체크하는 프로그램.	*/
	/*
	int n1, n2;
	printf("첫 번째 숫자 입력: ");
	scanf("%d", &n1);
	printf("두 번째 숫자 입력: ");
	scanf("%d", &n2);

	if (n1 < n2) {
		printf("%d는 %d보다 작다. \n", n1, n2);
	}
	else if (n1 > n2) {
		printf("%d는 %d보다 크다. \n", n1, n2);
	}
	else if (n1 = n2) {
		printf("%d는 %d와 같다. \n", n1, n2);
	}	*/

	/*
	 ㄷ)
	 국어, 영어, 수학 점수를 입력받아서 총점, 평균, 학점을 구하는 프로그램.
	 학점: 100~90점:A학점, 89~80:B학점, ... 59~0:F학점
	 A, B, C, D, F학점
	 if (90 <= num <= 100) -> (num >= 90 && num <= 100)	*/
	/*
	int kor, eng, math, total = 0;
	float avg = 0;

	printf("국어 점수 입력: ");
	scanf("%d", &kor);
	printf("영어 점수 입력: ");
	scanf("%d", &eng);
	printf("수학 점수 입력: ");
	scanf("%d", &math);

	printf("총점: %d점 \n", total = kor + eng + math);
	printf("평균: %.1f점 \n", avg = total / 3);

	if (avg >= 90 && avg <= 100) {
		printf("A 학점 \n");
	}
	else if (avg >= 80 && avg <= 89) {
		printf("B 학점 \n");
	}
	else if (avg >= 70 && avg <= 79) {
		printf("C 학점 \n");
	}
	else if (avg >= 60 && avg <= 69) {
		printf("D 학점 \n");
	}
	else {
		printf("F 학점 \n");
	}	*/



	/*
	ㄱ) 아래의 메뉴를 선택하여 출력.
	조건1. 메뉴 선택은 문자로 입력 처리.
	조건2. 프로그램 출력은 아래와 같은 형식으로 하기 바람
	-------------------------
	식당 메뉴 자동 주문 프로그램 v1.0
	-------------------------
	a. 김치찌개	: 5,000원
	b. 된장찌개	: 5,000원
	c. 칼국수	: 4,500원
	d. 잔치국수	: 4,000원
	e. 비빔밥	: 5,000원
	-------------------------
	메뉴를 선택 : c
	비빔밥을 주문했습니다.	*/
	/*
	while (1) {
		system("cls");
		printf("------------------------- \n");
		printf("식당 메뉴 자동 주문 프로그램 v1.0 \n");
		printf("------------------------- \n");
		printf("a. 김치찌개	: 5,000원 \n");
		printf("b. 된장찌개	: 5,000원 \n");
		printf("c. 칼국수	: 4,500원 \n");
		printf("d. 잔치국수	: 4,000원 \n");
		printf("e. 비빔밥	: 5,000원 \n");
		printf("x. 프로그램 종료 \n");
		printf("------------------------- \n");

		char menu;
		printf("메뉴를 선택 : ");
		scanf(" %c", &menu);

		switch (menu) {
		case 'a':
			printf("김치찌개를 주문했습니다. \n"); break;
		case 'b':
			printf("된장찌개를 주문했습니다. \n"); break;
		case 'c':
			printf("칼국수를 주문했습니다. \n"); break;
		case 'd':
			printf("잔치국수를 주문했습니다. \n"); break;
		case 'e':
			printf("비빔밥을 주문했습니다. \n"); break;
		case 'x':
			printf("앱을 종료합니다. \n");
			exit(0);
		}
		system("pause");
	}	*/


	/*
	ㄴ)
	-------------------------
	우유 자판기 프로그램 v1.0
	-------------------------
	1. 초코 우유 : 6,000원
	2. 바나나 우유 : 5,000원
	3. 딸기 우유 : 4,500원
	4. 메론 우유 : 4,500원
	5. 커피 우유 : 4,000원
	-------------------------
	우유를 선택하세요 : 5
	커피 우유를 선택하셨습니다.
	-------------------------
	우유 금액을 입급하세요. = > 10000
	커피 우유를 구매했습니다. 거스름돈 5,500원을 받으세요.	*/
	printf("------------------------- \n");
	printf("우유 자판기 프로그램 v1.0 \n");
	printf("------------------------- \n");
	printf("1. 초코 우유	: 6,000원 \n");
	printf("2. 바나나 우유	: 5,000원 \n");
	printf("3. 딸기 우유	: 4,500원 \n");
	printf("4. 메론 우유	: 4,500원 \n");
	printf("5. 커피 우유	: 4,000원 \n");
	printf("0. 프로그램 종료 \n");
	printf("------------------------- \n");
	int menu;
	do {		
		printf("우유를 선택하세요:  ");
		scanf("%d", &menu);
	} while (menu <= 0 || menu > 5);

	switch (menu) {
	case 1:
		printf("초코 우유를 선택하셨습니다. \n"); break;
	case 2:
		printf("바나나 우유를 선택하셨습니다. \n"); break;
	case 3:
		printf("딸기 우유를 선택하셨습니다. \n"); break;
	case 4:
		printf("메론 우유를 선택하셨습니다. \n"); break;
	case 5:
		printf("커피 우유를 선택하셨습니다. \n"); break;
	case 0:
		printf("앱을 종료합니다. \n");
		exit(0);
	}
	printf("------------------------- \n");

	int money;
	printf("우유 금액을 입금하세요. : ");
	scanf("%d", &money);

	switch (menu) {
	case 1:
		printf("초코 우유를 구매했습니다. 거스름돈 %d원을 받으세요. \n", money -= 6000); break;
	case 2:
		printf("바나나 우유를 구매했습니다. 거스름돈 %d원을 받으세요. \n", money -= 5000); break;
	case 3:
		printf("딸기 우유를 구매했습니다. 거스름돈 %d원을 받으세요. \n", money -= 4500); break;
	case 4:
		printf("메론 우유를 구매했습니다. 거스름돈 %d원을 받으세요. \n", money -= 4500); break;
	case 5:
		printf("커피 우유를 구매했습니다. 거스름돈 %d원을 받으세요. \n", money -= 4000); break;
	}

}
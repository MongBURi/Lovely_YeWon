#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 디버깅(debugging): 오류를 해결하는 일련의 과정
	// 반복문: 특정한 문장을 반복적으로 실행.
	/*	
		< for문 >
	for (int i = 0; i < 3; i++) {		// 안녕하세요 3번 출력하고 싶다
		printf("for 안녕하세요\n");		// 0~2까지 3번 출력됨
	}
		< whhile 문 >
	int ii = 0;
	while (ii < 3) {
		printf("while 안녕하세요\n");
		ii++;
	}
		< do-while 문 >
	int j = 0;
	do {
		printf("do-while 안녕하세요\n");		// 먼저 한 번은 실행 후 조건 체크함
		printf("j: %d\n", j);				// 로그를 확인 (디버깅)
		j++;
	} while (j < 3);	*/

	
	/*
	문제1-1)	1개의 숫자를 입력받아 구구단 출력하는 프로그램.
			예) 3을 입력하면 구구단 3단 출력.	*/
			/*
	printf("구구단 입력: ");
	int gugu;
	scanf("%d", &gugu);
	printf("%d x %d = %d\n", gugu, 1, gugu * 1);
	printf("%d x %d = %d\n", gugu, 2, gugu * 2);
	printf("%d x %d = %d\n", gugu, 3, gugu * 3);
	printf("%d x %d = %d\n", gugu, 4, gugu * 4);
	printf("%d x %d = %d\n", gugu, 5, gugu * 5);
					↓↓↓↓↓
	printf("-------------------------------\n");
	for (int i = 1; i < 10; i++) {					// ㄱ.i++ ㄴ.i=i+1 ㄷ.i+=1 3개 다 같은 것
		printf("%d x %d = %d\n", gugu, i, gugu * i);
					↓↓↓↓↓
	for (int i = 1; i < 10; i+=2) {					// 1 3 5 7 9 홀수만 나오게 하는 방법
		printf("%d x %d = %d\n", gugu, i, gugu * i);
	}
					↓↓↓↓↓
	for (int i = 2; i < 10; i+=2) {					// 2 4 6 8 짝수만 나오게 하는 방법
		printf("%d x %d = %d\n", gugu, i, gugu * i);
	}
	}	*/

			/*
	int dan = 0;
	int n = 1;
	printf("구구단 입력: ");
	scanf("%d", &dan);

	while (n < 10)
	{
		printf("%d x %d = %d \n", dan, n, dan * n);
		n++;
	}	*/


	/*
	문제1-2)	시작값과 마지막값을 입력받아 합 구하는 프로그램.
			예) 1번째 입력:2, 2번째 입력:5
				2+3+4+5 = 14
			조건) 만약에 2번째 수가 1번째 수보다 작거나 같으면 다시 입력.	*/
	
			//	< 첫날 답안 >
			/*
	int n1, n2, total = 0;
	printf("시작 숫자 입력: ");
	scanf("%d", &n1);

	do {
		printf("마지막 숫자 입력: ");			// 마지막 단계로 do~while로 조건 달기
		scanf("%d", &n2);
	} while (n2 <= n1);

	//for (int i = 0; i < 5; i++) {			 // -> 어떻게 변경할까??
	//	  total += i;

	for (int i = n1; i <= n2; i++) {
		total += i;
	}
	printf("%d ~ %d까지 합: %d \n", n1, n2, total);	*/

			//	< 둘째 날 답안>
			/*
	int start, end;
	printf("시작 숫자 입력: ");
	scanf("%d", &start);
	int backup = start;					// 1번째 입력값을 백업
	printf("마지막 숫자 입력: ");
	scanf("%d", &end);					// while문에서는 조건이 선행돼야 함

	while (start >= end) {				// 입력받기 전이라 쓰레기값 채워져서 쓸 수 없음
		printf("마지막 숫자 재입력: ");
		scanf("%d", &end);
	}	*/

			//	↓ do-while문으로 더 간결하게.
			/*
	do {
		printf("마지막 숫자 입력: ");
		scanf("%d", &end);
	} while (start >= end);

	int hap = 0;
	for (; start <= end; start++) {
	for (int i = start; i <= end; i++) {
		hap = hap + i;
	}
	printf("%d ~ %d의 합: %d\n", backup, end, hap);	*/


	/*
	문제1-3)	구구단 전체 출력. (2~9단 출력)
			2x1=2  3x1=3  4x1=4 ... 9x1=9
			2x2=4  3x2=6  4x2=8 ... 9x2=18
			...
			2x9=18 3x9=27 4x9=36 ... 9x9=81	*/
	
			//	< 첫날 답안 >
			/*
	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%dx%d=%d\n", i, j, i * j);		// 기존 구구단 출력방법
		}
		printf("\n");
	}
	for (int i = 1; i < 10; i++) {					// 1~9곱하기
		for (int j = 2; j < 10; j++) {				// 2~9단으로 바꿈
			printf("%dx%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}	*/

			//	< 둘째 날 답안 >
			/*
			행과 열의 개념은 반드시 2중 반복문에서 적용
			행:row  ex) 5행4열=5x4
	
	for (int i = 0; i < 3; i++) {
		printf("1행의 %d\t", i + 1);		// 1행의 첫 번쨰 값, 두 번째 값... n번째 값
	}
	printf("\n");	*/	

			//	↓ [ 행-열-열 > 행-열-열...(아래로 쓰냐or옆으로 쓰냐) ]
			/*
	for (int i = 0; i < 3; i++) {				// (규칙)바깥 반목문이 행이 됨
		for (int j = 0; j < 2; j++) {			// (규칙)안쪽 반복문이 열이 됨
			printf("%d행 %d열\t", i+1, j+1);		// '\n'을 할 경우 아래로 쭉 나옴
		}										// '\t'를 할 경우 옆으로 쭉 나옴
		printf("\n");
	}
	
			//	↓ [ 행에서 단이 바뀌기 때문에 열이 단이 돼야 함 ]
	for (int i = 1; i < 10; i++) {		// (기존)i는 2~9단 (수정)i는 1~9까지 곱
		for (int j = 2; j < 10; j++) {	// 단이 됨
			printf("%d x %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}	*/


}
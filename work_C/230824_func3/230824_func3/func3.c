#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hap_func();
int avg_func(int total);
char hak_func(int avg);

int main()
{
	/*	문제) 학점을 출력하는 프로그램.
		조건1) 5명의 국, 영, 수 점수를 랜덤하게 생성. (0~100점 사이)
		조건2) 2차원 배열을 생성하여 1번째 학생의 국,영,수 점수를 1행1열, 1행2열, 1행3열에 저장.
		조건3) 2번째 학생의 점수는 2행	*/
	// 구조체(클래스와 비슷한 개념)를 사용하여 처리하는 것이 더 좋다.
	int score[5][3] = { 0 };
	srand(time(NULL));

	int hap = 0;
	int avg = 0;
	
	for (int i = 0; i < 5; i++) {		// 랜덤하게 발생한 숫자를 5명의 학생(5x3배열)에게 저장.
		for (int j = 0; j < 3; j++) {
			score[i][j] = rand() % 101;
			printf("score[%d][%d]=%d\t", i, j, score[i][j]);
			hap += score[i][j];
		}			
		avg = avg_func(hap);
		printf("\t총점:%d 평균:%d ", hap, avg);
		printf("%c학점", hak_func(avg));
		hap = 0;
		printf("\n");
	}
		
}

void hap_func()
{
	// 사용하지 않는 것이 효율적이다
}

int avg_func(int hap)
{
	return hap / 3;
}

char hak_func(int avg)
{	
	char hak = 0;
	if (avg >= 90 && avg <= 100) {
		hak = 'A';
	}
	else if (avg >= 80 && avg <= 89) {
		hak = 'B';
	}
	else if (avg >= 70 && avg <= 79) {
		hak = 'C';
	}
	else if (avg >= 60 && avg <= 69) {
		hak = 'D';
	}
	else {
		hak = 'F';
	}
	return hak;
}
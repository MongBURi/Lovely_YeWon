#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*	문제) 학점을 출력하는 프로그램.
		조건1) 5명의 국, 영, 수 점수를 랜덤하게 생성. (0~100점 사이)
		조건2) 2차원 배열을 생성하여 1번째 학생의 국,영,수 점수를 1행1열, 1행2열, 1행3열에 저장.
		조건3) 2번째 학생의 점수는 2행	*/

	int score[5][3] = { 0 };
	srand(time(NULL));

	int total = 0;
	int avg = 0;

	for (int i = 0; i < 5; i++) {		
		for (int j = 0; j < 3; j++) {			
			score[i][j] = rand() % 101;			
			printf("score[%d][%d]=%d  ", i, j, score[i][j]);
			total += score[i][j];
		}
		avg = total / 3;
		printf("총점:%d  ", total);
		printf("평균:%d  ", avg);
		total = 0;
		printf("\n");
	}
}

void 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*	����) ������ ����ϴ� ���α׷�.
		����1) 5���� ��, ��, �� ������ �����ϰ� ����. (0~100�� ����)
		����2) 2���� �迭�� �����Ͽ� 1��° �л��� ��,��,�� ������ 1��1��, 1��2��, 1��3���� ����.
		����3) 2��° �л��� ������ 2��	*/

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
		printf("����:%d  ", total);
		printf("���:%d  ", avg);
		total = 0;
		printf("\n");
	}
}

void 
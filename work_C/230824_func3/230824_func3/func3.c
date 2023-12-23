#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hap_func();
int avg_func(int total);
char hak_func(int avg);

int main()
{
	/*	����) ������ ����ϴ� ���α׷�.
		����1) 5���� ��, ��, �� ������ �����ϰ� ����. (0~100�� ����)
		����2) 2���� �迭�� �����Ͽ� 1��° �л��� ��,��,�� ������ 1��1��, 1��2��, 1��3���� ����.
		����3) 2��° �л��� ������ 2��	*/
	// ����ü(Ŭ������ ����� ����)�� ����Ͽ� ó���ϴ� ���� �� ����.
	int score[5][3] = { 0 };
	srand(time(NULL));

	int hap = 0;
	int avg = 0;
	
	for (int i = 0; i < 5; i++) {		// �����ϰ� �߻��� ���ڸ� 5���� �л�(5x3�迭)���� ����.
		for (int j = 0; j < 3; j++) {
			score[i][j] = rand() % 101;
			printf("score[%d][%d]=%d\t", i, j, score[i][j]);
			hap += score[i][j];
		}			
		avg = avg_func(hap);
		printf("\t����:%d ���:%d ", hap, avg);
		printf("%c����", hak_func(avg));
		hap = 0;
		printf("\n");
	}
		
}

void hap_func()
{
	// ������� �ʴ� ���� ȿ�����̴�
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
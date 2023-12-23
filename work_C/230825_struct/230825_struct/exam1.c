#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct level {		// �� �� ���� Ʋ
	int kor;		// int kor[5] �� ��!
	int eng;
	int math;
	int total;
	int avg;
	char hak;
	char name[20];
};

char show_hak(int avg);

int main()
{
	/*	����)	�л� 5���� ��,��,�� ������ ����,���,������ �����ϴ� ����ü.
				1. ����ü�� �����ϰ� ����ü �迭 ���� ����.	
				2. 5���� �л����� ������ ��,��,�� ������ �Է��ϰ� ���.
				3. s[]�迭������ �����ϰ� 1�� �����ؼ� �� ������ �����ϱ�.
				4. ���� �Լ� �����.	*/
				
	char* name[5] = { "�Ͽ���", "�̿���", "�￹��", "�翹��", "������" };
	int s[] = { 10,20,30,40,50,60,70,80,90,100 };
	struct level arr[5] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		strcpy(arr[i].name, name[rand() % 5]);
		arr[i].kor = s[rand() % 10];
		arr[i].eng = s[rand() % 10];
		arr[i].math = s[rand() % 10];
		arr[i].total = arr[i].kor + arr[i].eng + arr[i].math;
		arr[i].avg = arr[i].total / 3;

		printf(">>> %d��° %s �л����� <<<\n", i + 1, arr[i].name);
		printf("�л�[%d] ���� ����:%d\n", i + 1, arr[i].kor);		
		printf("�л�[%d] ���� ����:%d\n", i + 1, arr[i].eng);		
		printf("�л�[%d] ���� ����:%d\n", i + 1, arr[i].math);
		printf("�л�[%d] ����:%d\n", i + 1, arr[i].total);
		printf("�л�[%d] ���:%d\n", i + 1, arr[i].avg);
		printf("�л�[%d] ����:%c\n", i + 1, show_hak(arr[i].avg));
		printf("-------------------------\n");
	}
}

char show_hak(int avg)
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


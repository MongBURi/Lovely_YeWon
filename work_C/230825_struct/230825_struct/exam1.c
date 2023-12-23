#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct level {		// 한 명에 대한 틀
	int kor;		// int kor[5] → 놉!
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
	/*	문제)	학생 5명의 국,영,수 점수와 총점,평균,학점을 정의하는 구조체.
				1. 구조체를 정의하고 구조체 배열 변수 선언.	
				2. 5명의 학생에게 랜덤한 국,영,수 점수를 입력하고 출력.
				3. s[]배열값에서 랜덤하게 1개 추출해서 각 점수에 대입하기.
				4. 학점 함수 만들기.	*/
				
	char* name[5] = { "일예원", "이예원", "삼예원", "사예원", "오예원" };
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

		printf(">>> %d번째 %s 학생점수 <<<\n", i + 1, arr[i].name);
		printf("학생[%d] 국어 점수:%d\n", i + 1, arr[i].kor);		
		printf("학생[%d] 영어 점수:%d\n", i + 1, arr[i].eng);		
		printf("학생[%d] 수학 점수:%d\n", i + 1, arr[i].math);
		printf("학생[%d] 총점:%d\n", i + 1, arr[i].total);
		printf("학생[%d] 평균:%d\n", i + 1, arr[i].avg);
		printf("학생[%d] 학점:%c\n", i + 1, show_hak(arr[i].avg));
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


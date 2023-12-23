#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void level(int n1, int n2, int n3);
#include <stdlib.h>	// exit()

int main()
{
	/*
	문제6)	국,영,수 점수를 입력받아서 총점, 평균값을 구하는 프로그램.
			조건1) 점수 입력은 main()에서 입력받음.
			조건2) 입력받는 점수는 0~100사이의 숫자만 입력받도록 조건 체크하기.
					→ 간단하게 한 번만 체크하면 됨(사용자 실수로 잘못 입력하면 에러메세지 출력하고 종료 처리)
			조건3) 국,영,수 점수를 각각의 매개변수로 전달하여 총점, 평균값을 출력하는 함수 작성.
			조건4) 조건3까지 테스트완료 이후에 잘못입력값 체크를 확장하기(실수로 입력하면 재입력 받을 수 있도록 처리)
					→ 시간적인 여유가 있으면 해보고 아니면 패스하기 바람	*/

	int kor = 0, eng = 0, math = 0;	
	printf("국어 점수 입력: ");
	scanf("%d", &kor);
	if (kor < 0 || kor > 100) {			// 0보다 작거나 100보다 클 경우
		printf("잘못된 점수 입력\n");
		exit(0);						// 프로그램 강제 종료 또는 return 0;
	}
	printf("영어 점수 입력: ");
	scanf("%d", &eng);
	if (eng < 0 || eng > 100) {
		do {
			printf("영어 점수 다시 입력: ");
			scanf("%d", &eng);
		} while (eng < 0 || eng > 100);
	}
	printf("수학 점수 입력: ");
	scanf("%d", &math);
	if (math < 0 || math > 100) {
		do {
			printf("수학 점수 다시 입력: ");
			scanf("%d", &math);
		} while (math < 0 || math > 100);
	}
	level(kor, eng, math);	
}

void level(int n1, int n2, int n3)
{	
	int total = n1 + n2 + n3;
	int avg = total / 3;
	printf("총점: %d점, 평균: %d점", total, avg);
}
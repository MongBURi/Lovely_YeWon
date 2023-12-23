#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1.원주율(PI)을 저장하는 실수형 상수변수를 생성하고 값을 설정(PI=3.14)
	//2.원의 반지름을 저장하는 실수형 변수를 생성하고 입력 받기.
	//3.원의 면적을 출력하기(반지름 * 반지름 * PI = 원의 면적)
	const float PI = 3.14;
	float r;
	printf("원의 반지름: ");
	scanf("%f", &r);
	float result = r * r * PI;
	printf("원의 면적: %.1f \n", result);

	// 1.국어, 영어, 수학, 과학 정수형 변수 생성.
	// 2.국어, 영어, 수학, 과학 점수 입력 받기.
	// 3.모든 과목의 평균값과 총점을 저장할 변수를 생성.
	// 4.평균값과 총점을 출력하세요.
	// 평균 = 총점 / 4(전체 개수)
	int kor, eng, math, sci;
	printf("국어 점수: ");
	scanf("%d", &kor);
	printf("영어 점수: ");
	scanf("%d", &eng);
	printf("수학 점수: ");
	scanf("%d", &math);
	printf("과학 점수: ");
	scanf("%d", &sci);
	int total = kor + eng + math + sci;
	float avg = total / 4;
	printf("총점: %d점, 평균값: %.1f점 \n", total, avg);

	// 1.화씨 온도를 저장하는 정수형 변수 생성.
	// 2.화씨 온도를 입력 받기.
	// 3.섭씨 온도를 저장하는 실수형 변수 생성.
	// 4.화씨 온도를 섭씨 온도로 변환하세요. 섭씨온도=(화씨온도 - 32) / 1.8
	// 5.섭씨 온도를 출력하세요.
	int h;
	printf("화씨 온돈: ");
	scanf("%d", &h);
	float s;
	s = (h - 32) / 1.8;
	printf("섭씨 온도: %.1f도 \n", s);
		
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int villa[4][2];
	int popu, i, j;

	/*	가구별 거주인원 입력 받기	*/
	for (i = 0; i < 4; i++) {							// 2중반복문 바깥쪽: 행(거의 대부분)
		for (j = 0; j < 2; j++) {
			printf("%d층 %d호 인구수: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);					//여기서는 일반변수로 쓰여서 & 붙임
		}
	}

	/*	빌라의 층별 인구수 출력하기	*/
	for (i = 0; i < 4; i++) {
		popu = 0;					// 층별로 구해야 하기 때문에 0으로 초기화
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d층의 인구수: %d \n", i + 1, popu);
	}

}
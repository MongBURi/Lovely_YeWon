#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define DEBUG	1	// 주석으로 막혀있으면 디버깅코드 동작 x

int main()
{
	/*	< 학습목표 >
		1. 로또 생성(중복 방지) → 배열까지의 학습 내용
		2. 함수로 처리 → 함수 학습 내용	*/

	int lotto[6] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1;
#ifdef DEBUG	// #define DEBUG가 정의 되어있으면 동작, 막혀 있으면 죽음
		printf("%d  ", lotto[i]);	// 디버깅
#endif
		for (int j = 0; j < i; j++) {		// 배열에 있는 숫자와 새로 획득한 숫자 비교
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
		printf("%d  ", lotto[i]);
	}

	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d  ", lotto[i]);
	}
}
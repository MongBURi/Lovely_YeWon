#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	구구단의 결과값을 저장할 2차원 배열 생성
	2x1=2  3x1=3  4x1=4... 9x1=9
	2x2=4  3x2=6  4x2=8... 9x2=18
	...
	2x9=18 3x9=27 4x9=36... 9x9=81
	(2x1: i,j값으로 출력, =2: 배열에서 출력)
	출력 형태는 위와 같이 하고 결과값은 배열에서 읽어와서 출력	*/
	/*
	int arr[9][8] = { 0 };
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			arr[i-1][j-2] = j * i;
			printf("%dx%d=%d\t", j, i, arr[i-1][j-2]);
		}
		printf("\n");
	}	*/


}
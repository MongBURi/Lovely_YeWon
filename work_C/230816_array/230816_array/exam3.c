#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	아래 행렬의 덧셈을 구하세요.
	조건1) 1~9까지의 행렬을 2차원 배열에 저장하기.
	조건2) 10~90까지의 행렬을 2차원 배열에 저장하기.
	조건3) 두 행렬을 덧셈하여 새로운 2차원 배열에 저장하고 결과값들을 출력하기.	*/
	/*
	int a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int b[3][3] = {
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};	
	int c[3][3] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = a[i][j] + b[i][j];
			printf("c[%d][%d]= %d\t", i, j, c[i][j]);
		}
		printf("\n");
	}	*/

	/*
	혼자 연습
	int a[3][3] = { 0 };
	int b[3][3] = { 0 };
	int c[3][3] = { 0 };

	int i, j;
	int num = 1;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			a[i][j] = num++;
			printf("a[%d][%d]= %d\t", i, j, a[i][j]);
		}
		printf("\n");
	}	*/

}
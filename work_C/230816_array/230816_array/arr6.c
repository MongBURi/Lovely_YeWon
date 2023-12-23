#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[2][3] = {		// '2x3' = '2by3'으로 표현하기도 함
		{1, 2, 3},			// 1행
		{4, 5, 6}			// 2행
	};

	int num = 1;
	int arr2[5][3] = { 0 };					// 3행4열(3x4) 배열	
	for (int i = 0; i < 5; i++) {			// 바깥쪽: 행을 담당
		for (int j = 0; j < 3; j++) {		// 안쪽: 열을 담당
			arr2[i][j] = num++;				// arr2에 1~6까지 숫자 넣기
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}

	

}
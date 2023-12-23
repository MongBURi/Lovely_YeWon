#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_arr_comm(int arr1[2][4], int arr2[3][3], int arr3[2][2]);

int main()
{
	// 2차원 배열의 열의 크기가 다른 경우에는 매개변수 전달이 까다롭다.
	int arr1[2][4] = {
		{1, 2, 3, 30},
		{4, 5, 6, 60}
	};
	int arr2[3][3] = {
		{10},
		{20, 30},
		{40, 50, 60}
	};
	int arr3[2][2] = { 100, 200, 300, 400 };
	show_arr_comm(arr1, arr2, arr3);

}

/*			문제) arr1, arr2, arr3 배열 모두 출력하기	*/

void show_arr_comm(int arr1[2][4], int arr2[3][3], int arr3[2][2])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr2[i][j] != 0) {
				printf("%d\t", arr2[i][j]);
			}	
		}
		printf("\n");
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\t", arr3[i][j]);
		}
		printf("\n");
	}
}

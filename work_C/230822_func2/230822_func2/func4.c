#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void show_arr1(int a[2][3]);
void show_arr2(int a[2][3]);
void show_arr3(int a[2][3]);
void show_arr_comm(int a[2][3]);

int main()
{
	int arr1[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	int arr2[2][3] = {
		{10},
		{20, 30}
	};
	int arr3[2][3] = { 100, 200, 300, 400 };
	
	/*	문제)	arr1, arr2, arr3 각각의 배열을 출력하는 함수 작성하시오.
				↓ 주소값에 의한 전달	*/
				/*
	show_arr1(arr1);
	show_arr2(arr2);
	show_arr3(arr3);	*/
	//		↓
	show_arr_comm(arr1);				// 함수 하나에 매개변수만 바꿔넣어주면 됨.
	show_arr_comm(arr2);
	show_arr_comm(arr3);
}


void show_arr1(int a[2][3])				// 1차원 배열일 때 []생략 가능.
{										// 2차원 배열일 때 [][3]'행'만 생략 가능.
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void show_arr2(int a[2][3])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void show_arr3(int a[2][3])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

// ↓ 함수 3개나 쓸 필요가 없음(함수를 이해 못 한 것!)

void show_arr_comm(int a[2][3])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
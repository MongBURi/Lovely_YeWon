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
	
	/*	����)	arr1, arr2, arr3 ������ �迭�� ����ϴ� �Լ� �ۼ��Ͻÿ�.
				�� �ּҰ��� ���� ����	*/
				/*
	show_arr1(arr1);
	show_arr2(arr2);
	show_arr3(arr3);	*/
	//		��
	show_arr_comm(arr1);				// �Լ� �ϳ��� �Ű������� �ٲ�־��ָ� ��.
	show_arr_comm(arr2);
	show_arr_comm(arr3);
}


void show_arr1(int a[2][3])				// 1���� �迭�� �� []���� ����.
{										// 2���� �迭�� �� [][3]'��'�� ���� ����.
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

// �� �Լ� 3���� �� �ʿ䰡 ����(�Լ��� ���� �� �� ��!)

void show_arr_comm(int a[2][3])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
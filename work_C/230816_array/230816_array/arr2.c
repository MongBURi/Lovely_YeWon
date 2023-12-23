#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3, 4, 5, 6, 7};
	int arr3[5] = {1, 2};
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기: %d \n", sizeof(arr1)); // int 한 개당 4바이트: 4x5=20
	printf("배열 arr2의 크기: %d \n", sizeof(arr2));
	printf("배열 arr3의 크기: %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < ar2Len; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");

	for (i = 0; i < ar3Len; i++) {
		printf("%d ", arr3[i]);
	}
	printf("\n");	*/


	char str[] = "Good";
	printf("문자열 출력: %s \n", str);

	char han[] = "홍길동";
	printf("한글 출력: %s \n", han);


}
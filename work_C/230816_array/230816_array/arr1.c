#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5];			// int arr[5] = {10, 20, 30, 40, 50}; :1차원(디멘션) 배열 초기화 방법(정석)
	int sum = 0;		// int arr[5] = {0}; : 초기값 0으로 다 채우고 싶을 경우
						// int arr[ ] = {1, 2, 3, 4, 5}; : 생략 가능	
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;	// 실제 이렇게 쓰지 않음.

	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 10;						// 규칙적인 경우라서 반복문으로 표현 가능
		printf("arr[%d]: %d \n", i, arr[i]);
		sum += arr[i];
	}
	printf("배열요소에 저장된 값의 합: %d \n", sum);

}
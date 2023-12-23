#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void call_by_addr(int a[]);

int main()
{
	/*			◇ call by value (값에 의한 전달)와
				◆ call by address (주소값에 의한 전달) 이해하기.	*/

	int arr[2] = { 10, 20 };
	printf("1. main() → arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);
	call_by_addr(arr);
	printf("2. main() → arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);
	/*	call_by_addr()함수는 소멸되지만,
		arr[]배열이 있는 공간이 사라지는 게 아니라서
		main()에서 arr[]배열을 다시 출력해도 바뀐 결과값이 유지된다.	*/ 
}

void call_by_addr(int a[])
{	
	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	printf("call_by_addr() → arr[0]:%d, arr[1]:%d\n", a[0], a[1]);
}
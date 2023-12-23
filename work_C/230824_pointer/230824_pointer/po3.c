#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 100;
	int* p = &n;				// 포인터변수 p에 변수n의 '주소값을 참조'한다.
								// '&n' → 주소값을 사용하기 위해 '&'를 사용함.
	//int *p = NULL; 
	//p = &n;					→ 이 두 줄이나 위에 한 줄이나 동일.

	int arr[5] = { 10, 20, 30, 40, 50 };
	// 포인터 변수p에 배열변수arr의 주소값을 참조.
	p = arr;					// 'arr' → 이름 자체에 주소값이 있다.
	printf("p[0]:%d\n", p[0]);
	printf("*p:%d\n", *p);
	printf("arr[0]:%d\n", arr[0]);

	printf("p[0]:%d\n", p[1]);
	printf("*(p+1):%d\n", *(p+1));	// 메모리주소: p+0 p+1 p+2 p+3...
	printf("arr[0]:%d\n", arr[1]);	// '()'먼저 처리 후 → '*'(주소 안에 든 값)

	//	문제) 위의 printf()출력을 반복문을 사용하여 출력하기.
	for (int i = 0; i < 5; i++) {
		printf("arr[%d]:%d\t", i, arr[i]);
		printf("*(p+%d):%d\t", i, *(p + i));
		printf("p[%d]:%d\t", i, p[i]);
		printf("\n");
	}
}
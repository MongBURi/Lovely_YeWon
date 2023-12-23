#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 10;
	printf("1.num (변수에 저장된 값): %d\n", num);
	printf("1.num (num변수의 실제 주소값): 0x%p\n", &num);

	// 포인터변수 pnum에 num변수의 주소값 저장.
	int* pnum = &num;
	printf("2.*pnum (저장된 주소에 들어있는 값): %d\n", *pnum);

	*pnum = 20; // num = 20;과 동일.
	printf("3.*pnum (저장된 주소에 들어있는 값): %d\n", *pnum);

	printf("4.*num (변수에 저장된 값): %d\n", num);
	printf("5.pnum (pnum변수에 저장된 주소값): 0x%p\n", pnum);
}
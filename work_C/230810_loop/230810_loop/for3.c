#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int cur = 2; cur < 10; cur++) {				// 2단~9단까지
		for (int is = 1; is < 10; is++) {				// 각 단의 1~9까지
			printf("%d x %d = %d \n", cur, is, cur * is);
		}
		printf("\n");
	}
}
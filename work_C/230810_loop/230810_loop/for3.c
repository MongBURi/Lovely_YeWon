#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int cur = 2; cur < 10; cur++) {				// 2��~9�ܱ���
		for (int is = 1; is < 10; is++) {				// �� ���� 1~9����
			printf("%d x %d = %d \n", cur, is, cur * is);
		}
		printf("\n");
	}
}
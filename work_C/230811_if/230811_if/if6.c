#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("����! ");
	//       1��     2��      4��				// 1����2����3����4�� ��2����3����4�� ��2��...
	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0) {		//  ��	"2�� ����̰ų� 3�� ���"
			continue;							// 3��	if (num % 2 == 0 && num % 3 == 0)
		}										//  ��		   "2�� ����̸鼭 3�� ���"
		printf("%d, ", num);
	}
	printf("��! \n");

}
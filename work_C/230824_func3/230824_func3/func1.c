#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define DEBUG	1	// �ּ����� ���������� ������ڵ� ���� x

int main()
{
	/*	< �н���ǥ >
		1. �ζ� ����(�ߺ� ����) �� �迭������ �н� ����
		2. �Լ��� ó�� �� �Լ� �н� ����	*/

	int lotto[6] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1;
#ifdef DEBUG	// #define DEBUG�� ���� �Ǿ������� ����, ���� ������ ����
		printf("%d  ", lotto[i]);	// �����
#endif
		for (int j = 0; j < i; j++) {		// �迭�� �ִ� ���ڿ� ���� ȹ���� ���� ��
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
		printf("%d  ", lotto[i]);
	}

	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d  ", lotto[i]);
	}
}
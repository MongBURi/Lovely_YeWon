#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[2][3] = {		// '2x3' = '2by3'���� ǥ���ϱ⵵ ��
		{1, 2, 3},			// 1��
		{4, 5, 6}			// 2��
	};

	int num = 1;
	int arr2[5][3] = { 0 };					// 3��4��(3x4) �迭	
	for (int i = 0; i < 5; i++) {			// �ٱ���: ���� ���
		for (int j = 0; j < 3; j++) {		// ����: ���� ���
			arr2[i][j] = num++;				// arr2�� 1~6���� ���� �ֱ�
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}

	

}
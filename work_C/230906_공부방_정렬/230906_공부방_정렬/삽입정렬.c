#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// ��������
	int arr[] = { 8, 3, 1, 4 };
	int j = 0;

	for (int i = 1; i < 4; i++) {
		int key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];			
		}
		// �ڸ� �̵��� ������ Ű���� ���ڸ��� ����
		arr[j + 1] = key;
	}

	for (int i = 0; i < 4; i++) {
		printf("%d\t", arr[i]);
	}
}
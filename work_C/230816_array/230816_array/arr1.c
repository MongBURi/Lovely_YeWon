#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5];			// int arr[5] = {10, 20, 30, 40, 50}; :1����(����) �迭 �ʱ�ȭ ���(����)
	int sum = 0;		// int arr[5] = {0}; : �ʱⰪ 0���� �� ä��� ���� ���
						// int arr[ ] = {1, 2, 3, 4, 5}; : ���� ����	
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;	// ���� �̷��� ���� ����.

	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 10;						// ��Ģ���� ���� �ݺ������� ǥ�� ����
		printf("arr[%d]: %d \n", i, arr[i]);
		sum += arr[i];
	}
	printf("�迭��ҿ� ����� ���� ��: %d \n", sum);

}
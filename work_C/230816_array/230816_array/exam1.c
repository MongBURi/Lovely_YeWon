#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// ��� ���α׷��� ������ ������. (������ ���� �ٸ�)
	// <����-������-���-�ݺ���-�迭-�Լ�>
	// �迭: ���ӵ� �������� ����(���� ����)
	// �迭�����̸�: �迭�� �����ּ��� �ǹ̰� �ִ� �� ��scanf()�Լ��� ����ؼ� ���ڿ� �Է½� &����


	/*
	1���� �迭�� ����� �ʱⰪ ����(20,34,22,11,27)
	�迭 �ȿ� ����ִ� ��� ������ ���� ���ϱ�.
	����) �ݺ��� ���.	*/
	/*
	int arr[5] = { 20, 34, 22, 11, 27 };

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];		
	}
	printf("�迭�� ��� ��: %d", sum);	*/
	

	/*
	1~100������ ���ڸ� 1���� �迭�� ����.
	����1) �迭�� ����� ������ 3�� ����� ���
	����2) �迭�� ��ġ�� 90��°�� �� �ݺ��� Ż��	*/
	/*
	int arr[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		arr[i] = i + 1;
		if (arr[i] % 3 == 0) {
			printf("%d ", arr[i]);			
		}
		if (i == 89) {				// else if���� ���� if���� ����Ǿ����
			break;
		}
	}	*/
		

	/*
	1���� �迭�� 2,4,6,8,10�� ����.
	2�� ����̰� 3�� ����� ���� ���.
	�迭�� �� ��° ��ġ���� Ż��.	*/
	/*
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 2;
		if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
			printf("2�� 3�� ���: %d ", arr[i]);
		}
		if (i == 2) {
			break;
		}
	}	*/
		

	/*
	1. ���ο� 1���� �迭 a ����
	2. arr4�� �ִ� ������ a �迭�� 50,40,30,20,10 ������ �����Ͽ� ����ϱ�.	*/
	/*
	int arr4[] = { 10, 20, 30, 40, 50 };
	int a[5] = { 0 };
	
	for (int i = 0; i < 5; i++) {
		a[i] = arr4[4 - i];
		printf("%d ", a[i]);
	}	*/

	

}
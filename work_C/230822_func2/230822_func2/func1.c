#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void show_arr(int a[]);

int main()
{
							/*	�н���ǥ
				1. �迭 ������ �Ű������� �����ϴ� ���.
				2. ��������, �������� ���� ���� �� Ȱ��.
				3. call by value(���� ���� ����)
				4. call by address(�ּҰ��� ���� ����)
				�� �迭: ������ ������ �� �ִ� �������� ����	*/


	int arr[10] = { 0 };		// �������� 10�� ������ �� �ִ� �迭 ���� arr.
	int a;						// �������� 1���� �����ϴ� �Ϲ� ���� a.

	for (int i = 0; i < 10; i++) {		// ���� 1~10���� arr�迭�� ����.
		arr[i] = i + 1;		
	}
	show_arr(arr);				// �� call by address

}

void show_arr(int a[])		// ũ�Ⱑ �󸶵簣�� []����θ� �ȴ�.
{
	// main()���� ���� �迭�� �� �Լ����� ���.
	// arr�迭 ������ �ּҰ��� �Ű������� ����.
	for (int i = 0; i < 10; i++) {
		printf("a[%d]=%d\n", i, a[i]);
	}
}
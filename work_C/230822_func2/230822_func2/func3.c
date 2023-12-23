#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void call_by_addr(int a[]);

int main()
{
	/*			�� call by value (���� ���� ����)��
				�� call by address (�ּҰ��� ���� ����) �����ϱ�.	*/

	int arr[2] = { 10, 20 };
	printf("1. main() �� arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);
	call_by_addr(arr);
	printf("2. main() �� arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);
	/*	call_by_addr()�Լ��� �Ҹ������,
		arr[]�迭�� �ִ� ������ ������� �� �ƴ϶�
		main()���� arr[]�迭�� �ٽ� ����ص� �ٲ� ������� �����ȴ�.	*/ 
}

void call_by_addr(int a[])
{	
	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	printf("call_by_addr() �� arr[0]:%d, arr[1]:%d\n", a[0], a[1]);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 100;
	int* p = &n;				// �����ͺ��� p�� ����n�� '�ּҰ��� ����'�Ѵ�.
								// '&n' �� �ּҰ��� ����ϱ� ���� '&'�� �����.
	//int *p = NULL; 
	//p = &n;					�� �� �� ���̳� ���� �� ���̳� ����.

	int arr[5] = { 10, 20, 30, 40, 50 };
	// ������ ����p�� �迭����arr�� �ּҰ��� ����.
	p = arr;					// 'arr' �� �̸� ��ü�� �ּҰ��� �ִ�.
	printf("p[0]:%d\n", p[0]);
	printf("*p:%d\n", *p);
	printf("arr[0]:%d\n", arr[0]);

	printf("p[0]:%d\n", p[1]);
	printf("*(p+1):%d\n", *(p+1));	// �޸��ּ�: p+0 p+1 p+2 p+3...
	printf("arr[0]:%d\n", arr[1]);	// '()'���� ó�� �� �� '*'(�ּ� �ȿ� �� ��)

	//	����) ���� printf()����� �ݺ����� ����Ͽ� ����ϱ�.
	for (int i = 0; i < 5; i++) {
		printf("arr[%d]:%d\t", i, arr[i]);
		printf("*(p+%d):%d\t", i, *(p + i));
		printf("p[%d]:%d\t", i, p[i]);
		printf("\n");
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	// ��/���
#include <stdlib.h>	// srand() ǥ�� ���̺귯��
#include <time.h>	// time() �ð�

void check_odd(int a[]);

int main()
{
	/*
	����1)	1. main()���� 10���� ���ڸ� �����ϴ� 1���� �迭 ����.
			2. �����ϰ� 10���� ���ڸ� �迭�� ����.
			3. �迭�� �ּҰ��� �Ű������� �����ϰ� Ȧ,¦�� �����Ͽ� ����ϴ� �Լ� �ۼ�.
				ex) ��ȣ �������� �̴� ���(�ζ� ���� ����) ��		*/
				/*
	srand(time(NULL));					�� �Ź� �ٸ� �õ尪 ����.
	int random = 0;						�� ������ ������ ����.
	for (int i = 0; i < 6; i++) {		�� 6ȸ �ݺ�.
		random = (rand() % 45) + 1;		�� ���� 1~45���� ����.
		printf("%d\n", random);
	}	*/
	int arr[10] = { 0 };
	srand(time(NULL));
	int random = 0;
	for (int i = 0; i < 10; i++) {
		random = (rand() % 45) + 1;
		arr[i] = random;
		// printf("arr[%d] = %d\n", i, arr[i]);
	}	
	check_odd(arr);
}

void check_odd(int a[])
{
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 <= 0) {
			printf("arr[%d] = %d\t¦���̴�.\n", i, a[i]);
		}
		else {
			printf("arr[%d] = %d\tȦ���̴�.\n", i, a[i]);
		}
	}	
}

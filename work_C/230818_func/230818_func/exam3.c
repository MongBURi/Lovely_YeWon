#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_sort(int n1, int n2, int n3);

int main()
{
	/*
	����3)	1. 3���� ������ main()���� �Է¹޾Ƽ� �Ѳ����� �Ű������� ����.
			2. �Լ����� 3���� ���ڸ� ũ�� ������� ���.
			3. �Լ���: my_sort
			4. if (n1 > n2 > n3): �߸��� ����
			5. ��� ����:
				n1�� ���� ũ�� n2�� �ι�° ũ�� n3�� ���� ���� �� (n1 > n2 > n3)
				n3�� ���� ũ�� n1�� �ι�° ũ�� n2�� ���� ���� �� (n3 > n1 > n2)	*/
			
	printf("3���� ������ �Է��ϼ���:\n");
	int n1, n2, n3;
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	my_sort(n1, n2, n3);
}

void my_sort(int n1, int n2, int n3)
{	
	/*
	 1 > 2 > 3
	 1 > 3 > 2
	 2 > 1 > 3
	 2 > 3 > 1
	 3 > 1 > 2
	 3 > 2 > 1	*/
	if (n1 > n2 && n2 > n3) {
		printf("%d > %d > %d", n1, n2, n3);
	}
	else if (n1 > n3 && n3 > n2) {
		printf("%d > %d > %d", n1, n3, n2);
	}
	else if (n2 > n1 && n1 > n3) {
		printf("%d > %d > %d", n2, n1, n3);
	}
	else if (n2 > n3 && n3 > n1) {
		printf("%d > %d > %d", n2, n3, n1);
	}
	else if (n3 > n1 && n1 > n2) {
		printf("%d > %d > %d", n3, n1, n2);
	}
	else if (n3 > n2 && n2 > n1) {
		printf("%d > %d > %d", n3, n2, n1);
	}
	else {
		printf("�� �� ����\n");
	}


}
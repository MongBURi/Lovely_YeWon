#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// ���迬����, �������ڰ� if���� �������� ���� ���ȴ�.

	/*
	����1-1)	1���� ���ڸ� �Է¹޾Ƽ� ¦��, Ȧ������ üũ�ϴ� ���α׷�.
			������ ������ (num%2 == 0) -> num�� 2�� ���� �������� 0�� ���ٸ�)	*/
			/*
	printf("���ڸ� �Է��ϼ���: ");
	int n;
	scanf("%d", &n);
	
	if (n % 2 != 0) {
		printf("�Է¹��� %d�� Ȧ��. \n", n);
	}
	else {
		printf("�Է¹��� %d�� ¦��. \n", n);
	}	*/


	/*
	����1-2)	2���� ���ڸ� �Է¹޾Ƽ� ũ��, �۴�, ���ٸ� üũ�ϴ� ���α׷�.	*/
			/*
	int n1, n2;
	printf("ù ��° ���� �Է�: ");
	scanf("%d", &n1);
	printf("�� ��° ���� �Է�: ");
	scanf("%d", &n2);

	if (n1 > n2) {
		printf("%d��(��) %d���� ũ��. \n", n1, n2);
	}
	else if (n1 < n2) {
		printf("%d��(��) %d���� �۴�. \n", n1, n2);
	}
	else {
		printf("%d��(��) %d�� ����. \n", n1, n2);
	}	*/


	/*
	����1-3)	����, ����, ���� ������ �Է¹޾Ƽ� ����, ���, ������ ���ϴ� ���α׷�.
			����: 100~90��:A����, 89~80:B����, ... 59~0:F����
			A, B, C, D, F����
			if (90 <= num <= 100) -> (num >= 90 && num <= 100)
				C������ �Ұ���		 �������ڷ� ǥ���ؾ� ��	*/
			/*
	int kor, eng, math;
	int total = 0, avg = 0;
	printf("���� ���� �Է�: ");
	scanf("%d", &kor);
	printf("���� ���� �Է�: ");
	scanf("%d", &eng);
	printf("���� ���� �Է�: ");
	scanf("%d", &math);

	total = kor + eng + math;
	avg = total / 3;
	if (avg >= 90 && avg <= 100) { // ������ ǥ���ϴ� ����� �������ڹۿ� ���� "~���� ~����"
		printf("����: %d, ���: %d => A���� \n", total, avg);
	}
	else if (avg >= 80 && avg <= 89) {
		printf("����: %d, ���: %d => B���� \n", total, avg);
	}
	else if (avg >= 70 && avg <= 79) {
		printf("����: %d, ���: %d => C���� \n", total, avg);
	}
	else if (avg >= 60 && avg <= 69) {
		printf("����: %d, ���: %d => D���� \n", total, avg);
	}
	else {
		printf("����: %d, ���: %d => F���� \n", total, avg);
	}	*/

}
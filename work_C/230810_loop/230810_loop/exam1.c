#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// �����(debugging): ������ �ذ��ϴ� �Ϸ��� ����
	// �ݺ���: Ư���� ������ �ݺ������� ����.
	/*	
		< for�� >
	for (int i = 0; i < 3; i++) {		// �ȳ��ϼ��� 3�� ����ϰ� �ʹ�
		printf("for �ȳ��ϼ���\n");		// 0~2���� 3�� ��µ�
	}
		< whhile �� >
	int ii = 0;
	while (ii < 3) {
		printf("while �ȳ��ϼ���\n");
		ii++;
	}
		< do-while �� >
	int j = 0;
	do {
		printf("do-while �ȳ��ϼ���\n");		// ���� �� ���� ���� �� ���� üũ��
		printf("j: %d\n", j);				// �α׸� Ȯ�� (�����)
		j++;
	} while (j < 3);	*/

	
	/*
	����1-1)	1���� ���ڸ� �Է¹޾� ������ ����ϴ� ���α׷�.
			��) 3�� �Է��ϸ� ������ 3�� ���.	*/
			/*
	printf("������ �Է�: ");
	int gugu;
	scanf("%d", &gugu);
	printf("%d x %d = %d\n", gugu, 1, gugu * 1);
	printf("%d x %d = %d\n", gugu, 2, gugu * 2);
	printf("%d x %d = %d\n", gugu, 3, gugu * 3);
	printf("%d x %d = %d\n", gugu, 4, gugu * 4);
	printf("%d x %d = %d\n", gugu, 5, gugu * 5);
					������
	printf("-------------------------------\n");
	for (int i = 1; i < 10; i++) {					// ��.i++ ��.i=i+1 ��.i+=1 3�� �� ���� ��
		printf("%d x %d = %d\n", gugu, i, gugu * i);
					������
	for (int i = 1; i < 10; i+=2) {					// 1 3 5 7 9 Ȧ���� ������ �ϴ� ���
		printf("%d x %d = %d\n", gugu, i, gugu * i);
	}
					������
	for (int i = 2; i < 10; i+=2) {					// 2 4 6 8 ¦���� ������ �ϴ� ���
		printf("%d x %d = %d\n", gugu, i, gugu * i);
	}
	}	*/

			/*
	int dan = 0;
	int n = 1;
	printf("������ �Է�: ");
	scanf("%d", &dan);

	while (n < 10)
	{
		printf("%d x %d = %d \n", dan, n, dan * n);
		n++;
	}	*/


	/*
	����1-2)	���۰��� ���������� �Է¹޾� �� ���ϴ� ���α׷�.
			��) 1��° �Է�:2, 2��° �Է�:5
				2+3+4+5 = 14
			����) ���࿡ 2��° ���� 1��° ������ �۰ų� ������ �ٽ� �Է�.	*/
	
			//	< ù�� ��� >
			/*
	int n1, n2, total = 0;
	printf("���� ���� �Է�: ");
	scanf("%d", &n1);

	do {
		printf("������ ���� �Է�: ");			// ������ �ܰ�� do~while�� ���� �ޱ�
		scanf("%d", &n2);
	} while (n2 <= n1);

	//for (int i = 0; i < 5; i++) {			 // -> ��� �����ұ�??
	//	  total += i;

	for (int i = n1; i <= n2; i++) {
		total += i;
	}
	printf("%d ~ %d���� ��: %d \n", n1, n2, total);	*/

			//	< ��° �� ���>
			/*
	int start, end;
	printf("���� ���� �Է�: ");
	scanf("%d", &start);
	int backup = start;					// 1��° �Է°��� ���
	printf("������ ���� �Է�: ");
	scanf("%d", &end);					// while�������� ������ ����ž� ��

	while (start >= end) {				// �Է¹ޱ� ���̶� �����Ⱚ ä������ �� �� ����
		printf("������ ���� ���Է�: ");
		scanf("%d", &end);
	}	*/

			//	�� do-while������ �� �����ϰ�.
			/*
	do {
		printf("������ ���� �Է�: ");
		scanf("%d", &end);
	} while (start >= end);

	int hap = 0;
	for (; start <= end; start++) {
	for (int i = start; i <= end; i++) {
		hap = hap + i;
	}
	printf("%d ~ %d�� ��: %d\n", backup, end, hap);	*/


	/*
	����1-3)	������ ��ü ���. (2~9�� ���)
			2x1=2  3x1=3  4x1=4 ... 9x1=9
			2x2=4  3x2=6  4x2=8 ... 9x2=18
			...
			2x9=18 3x9=27 4x9=36 ... 9x9=81	*/
	
			//	< ù�� ��� >
			/*
	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%dx%d=%d\n", i, j, i * j);		// ���� ������ ��¹��
		}
		printf("\n");
	}
	for (int i = 1; i < 10; i++) {					// 1~9���ϱ�
		for (int j = 2; j < 10; j++) {				// 2~9������ �ٲ�
			printf("%dx%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}	*/

			//	< ��° �� ��� >
			/*
			��� ���� ������ �ݵ�� 2�� �ݺ������� ����
			��:row  ex) 5��4��=5x4
	
	for (int i = 0; i < 3; i++) {
		printf("1���� %d\t", i + 1);		// 1���� ù ���� ��, �� ��° ��... n��° ��
	}
	printf("\n");	*/	

			//	�� [ ��-��-�� > ��-��-��...(�Ʒ��� ����or������ ����) ]
			/*
	for (int i = 0; i < 3; i++) {				// (��Ģ)�ٱ� �ݸ��� ���� ��
		for (int j = 0; j < 2; j++) {			// (��Ģ)���� �ݺ����� ���� ��
			printf("%d�� %d��\t", i+1, j+1);		// '\n'�� �� ��� �Ʒ��� �� ����
		}										// '\t'�� �� ��� ������ �� ����
		printf("\n");
	}
	
			//	�� [ �࿡�� ���� �ٲ�� ������ ���� ���� �ž� �� ]
	for (int i = 1; i < 10; i++) {		// (����)i�� 2~9�� (����)i�� 1~9���� ��
		for (int j = 2; j < 10; j++) {	// ���� ��
			printf("%d x %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}	*/


}
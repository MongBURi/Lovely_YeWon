#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// �������: const�� ���� �տ� ����.(���� �Ұ�) ��)3.14
	//int result;
	//int num1, num2, num3; // �Ϲݺ���: ���� ����
	//printf("����� �� ���Ծ�?: ");
	//scanf("%d", &num1);
	//printf("���ɰ� �� ���Ծ�?: ");
	//scanf("%d", &num2);
	//printf("���İ� �� ���Ծ�?: ");
	//scanf("%d", &num3);
	//result = num1 + num2 + num3;
	//printf("%d + %d + %d = %d \n", num1, num2, num3, result);

	// �������
	const int n = 100;
	int n2 = 200;
	n2 = 300; // �Ϲݺ����� ���� ���� ����
	n = 500;  // ��������� ���� ���� �Ұ���(���� n=100������)

}
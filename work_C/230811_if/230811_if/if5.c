#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0, num = 0;

	while (1) {
		sum += num;
		if (sum > 5000) {
			break;				// �ڽ��� ���� �ݺ����� Ż�� ����
		}
		//break; // (Ȧ�� �� ���)break ������ �ٷ� Ż��
		num++;
	}
	printf("sum: %d \n", sum); // rea code(���� �ڵ�):
	printf("num: %d \n", num); // (���ѹݺ��� ������)������� �ʴ� �ڵ�

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");					// ��
	scanf("%s", str);						// �� �߿�: �迭�̸� str�� �տ��� &�����ڸ� ������ �ʴ´�
	printf("�Է� ���� ���ڿ�: %s \n", str);	// ��	&: �ּ��� �ǹ̸� ����, �Ϲݺ����� �ּ��� �ǹ̰� ��� &�ٿ���ߵ�

	printf("���� ���� ���: ");
	while (str[idx] != '\0') {				// ��		\0����
		printf("%c", str[idx]);				// �� ����	�� �ھ� ���
		idx++;								// ��
	}
	printf("\n");

}
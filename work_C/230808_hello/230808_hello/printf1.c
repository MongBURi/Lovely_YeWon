#include <stdio.h>

int main()
{
	// %d: ������ �ٲ�.
	printf("hello Everybody\n");
	printf("���� ���:%d\n", 1234); // 1234�� %d�� ����.
	printf("2���� ���� ���:%d %d\n", 10, 20);

	// printf�Լ��� ����Ͽ� 10-20-30 ���
	printf("%d-%d-%d\n", 10, 20, 30);
	printf("%d�� %d�� %d��\n", 2023, 8, 8);

	// printf�Լ�: ������ ȭ�鿡 ���
	// ����: ����(����&�Ǽ�), ����(����&���ڿ�)> 4���� �� �ٸ�.
	// ����:%d, �Ǽ�:%f, ����:%c, ���ڿ�:%s
	// �ڸ���ǥ��, ��Ÿ ���� ǥ�� ���� �ܿ� �ʿ䰡 ����.
	// �ǹ������� ���ͳ����� ã�Ƽ� ó��.
	printf("�Ǽ�ǥ��:%.2f\n", 3.14); // �Ҽ��� �� �ڸ������� ǥ��
	printf("����ǥ��:%c\n", 'A'); // ����:����(''), ���ڿ�("")
	printf("���ڿ�:%s\n", "ȫ�浿");

	//--------------------------------------------
	// printf3.c ������Ʈ�� �߰��Ͽ� �Ʒ��� ������
	// ���Ĺ��ڸ� ����Ͽ� ����.

	/*
	---------------------------------
	      ������ ���� Ȯ�μ�
	---------------------------------
	�̸�: ȫ�浿(���Ĺ��� ���)
	����: 200
	��ȭ: 010-1234-1234
	�ּ�: ���� �Ѿ� ȫ�밨�� 11����
	Ű: 10.2cm
	������: 78.5kg
	������: B��
	----------------------------------
	*/
}
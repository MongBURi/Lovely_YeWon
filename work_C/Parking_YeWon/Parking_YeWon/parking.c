#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

typedef struct _CAR {
	char num[20];
} CAR;

int main()
{	
	printf("������ȣ 4�ڸ��� �Է��� �ֽʽÿ�. : ");	// ������ȣ �Է� �ȳ��� ���
	int car_num[4] = { 0 };							// ������ȣ ���� �迭 ����

	for (int i = 0; i < 4; i++) {						// �迭 �ε����� ������ȣ 1���� ��� ���� 4��(4�ڸ�) �ݺ�
		if (scanf("%1d", &car_num[i]) == 0) {			// ���� �Է��� ���� ���ڰ� �ƴ϶��
			printf("���ڷ� �ٽ� �Է��Ͽ� �ֽʽÿ�.\n");	// �ٽ� �Է��϶�� �ȳ��� ���
			rewind(stdin);								// ���� �Է½� ���ۿ� ���� �ִ� '����'�� '\n' ����
			i = (i - i) - 1;							// ���� �Է½� i�� -1�� �缳�� ��
		}
		// if�� Ż��� i++�Ǿ� �ᱹ i�� 0�� �ȴ�(= car_num[0]���� �ٽ� �Է��� ����)
	}

	// [�����] ������ȣ(�� �ڸ��� x 4�� �ݺ�)
	for (int i = 0; i < 4; i++) {
		printf("car_num[%d] = %d  ", i, car_num[i]);
	}
	printf("\n");

	// �Է��� ������ȣ�� �´��� ��Ȯ�� �ȳ��� ���
	printf("�Է��Ͻ� ������ȣ\n");
	printf("\n");
	printf("      ");
	for (int i = 0; i < 4; i++) {	// ������ȣ �� �ڸ���x�� �� ���
		printf("%d", car_num[i]);
	}
	printf("\n");
	printf("\n");

	printf("1. �½��ϴ�.  2.�ƴմϴ�.\n");
	int answer = sub_menu();
	if (answer == 2) {

	}


}

int sub_menu()
{
	int menu;
	scanf("%d", &menu);
	return menu;
}
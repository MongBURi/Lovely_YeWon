#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

typedef struct _CAR {
	char num[20];
} CAR;

int sub_menu();

int main()
{
	while (1) {
		system("cls");
		printf("������ȣ 4�ڸ��� �Է��� �ֽʽÿ�.\n");		// ������ȣ �Է� �ȳ��� ���
		int car_num[4] = { 0 };							// ������ȣ ���� �迭 ����

		for (int i = 0; i < 4; i++) {						// �迭 �ε����� ������ȣ 1���� ��� ���� 4��(4�ڸ�) �ݺ�
			if (scanf("%1d", &car_num[i]) == 0) {			// ���� �Է��� ���� ���ڰ� �ƴ϶��(scanf�� ��ȯ���� �ֳ���!)
				printf("�߸� �Է��ϼ̽��ϴ�.\n");				// �ٽ� �Է��϶�� �ȳ��� ���
				printf("�ٽ� �Է��Ͽ� �ֽʽÿ�.\n");
				rewind(stdin);								// ���� �Է½� ���ۿ� ���� �ִ� '����'�� '\n' ����
				i = (i - i) - 1;							// ���� �Է½� i�� -1�� �缳�� ��
			}
			// if�� Ż��� i++�Ǿ� �ᱹ i�� 0�� �ȴ�(= car_num[0]���� �ٽ� �Է��� ����)
		}
		printf("\n");


		// [�����] ������ȣ(�� �ڸ��� x 4�� �ݺ�)
		for (int i = 0; i < 4; i++) {
			printf("car_num[%d] = %d\n", i, car_num[i]);
		}
		printf("\n");


		// �Է��� ������ȣ�� �´��� ��Ȯ�� �ȳ��� ���
		printf("�Է��Ͻ� ������ȣ�� Ȯ���Ͽ� �ֽʽÿ�.\n");
		for (int i = 0; i < 4; i++) {	// ������ȣ �� �ڸ���x�� �� ���
			printf("%d", car_num[i]);
		}
		printf("\n");
				
		while (1) {
			printf("1.���� �ܰ�  2.�ٽ� �Է�\n");
			int answer = sub_menu();
			if (answer == 2) {		// 2�� �ٽ��Է� ���ý� while���� Ż��, ���� while������ �ǵ��ư���
				break;
			}
		}


	}
}

int sub_menu()
{
	int menu;
	scanf("%d", &menu);
	return menu;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��������: �Լ� �ۿ��� ����Ǵ� ����. (��� �Լ��� ���� ������ �� ����)
// ��������: �Լ� �ȿ����� ��� ������ ����.
const char CHECK_FULL = 'f'; // ���α׷� ����� ������ 'f'�̿��� ���� ���� �� ����.
// #define CHECK_FULL = 'f' �� �̷��� ǥ���ϱ⵵ �Ѵ�. (������ ���)
const char CHECK_EVEN = 'e';
const char CHECK_ODD = 'o';

int main_menu();
void gugu(char n);

int main()
{
	while (1) {
		int menu = main_menu();
		switch (menu) {
		case 1:
			gugu(CHECK_EVEN); break;
		case 2:
			gugu(CHECK_ODD); break;
		case 3:
			gugu(CHECK_FULL); break;
		case 4:
			printf("���α׷��� �����մϴ�.\n"); exit(0);
		default:
			printf("�߸��� �޴� �Է�!\n"); break;
		}
	}
}

int main_menu()
{
	printf("------------------------------\n");
	printf("�������� ����ϴ� �Լ� ���� v1.0\n");
	printf("------------------------------\n");
	printf("1. ������ ¦���� ���(2~8)\n");
	printf("2. ������ Ȧ���� ���(3~9)\n");
	printf("3. ������ ��ü ���(2~9)\n");
	printf("4. ����\n");
	printf("------------------------------\n");
	printf("�޴� ����: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void gugu(char n)
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (j % 2 == 0 && CHECK_EVEN == n) {
				printf("%d x %d = %d\t", j, i, j * i);
			}
			else if (j % 2 != 0 && CHECK_ODD == n) {
				printf("%d x %d = %d\t", j, i, j * i);
			}
			else if (CHECK_FULL == n) {
				printf("%d x %d = %d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}
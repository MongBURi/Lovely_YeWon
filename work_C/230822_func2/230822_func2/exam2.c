#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_menu();
void gugu(int menu);

int main()
{
	/*
	����2)	------------------------------
			�������� ����ϴ� �Լ� ���� v1.0
			------------------------------
			1. ������ ¦���� ���(2~8)
			2. ������ Ȧ���� ���(3~9)
			3. ������ ��ü ���(2~9)
			4. ����
			------------------------------
			�޴� ����:	*/

	while (1) {				
		int menu = main_menu();		
		switch (menu) {
		case 1:
			gugu(menu); break;
		case 2:
			gugu(menu); break;
		case 3:
			gugu(menu); break;
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
void gugu(int menu)
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (menu == 1 && j % 2 == 0) {
				printf("%d x %d = %d\t", j, i, j * i);
			}				
			else if (menu == 2 && j % 2 != 0) {
				printf("%d x %d = %d\t", j, i, j * i);
			}				
			else if (menu == 3) {
				printf("%d x %d = %d\t", j, i, j * i);
			}				
		}
		printf("\n");
	}
}
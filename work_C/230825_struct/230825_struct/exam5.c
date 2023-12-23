#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct car {
	char name[20];
};

struct manager {
	char name[20];
};

struct customer {
	char name[20];
	struct car ca;
	struct manager ma;
};

char* name[] = { "�Ͽ���", "�̿���", "�￹��", "�翹��", "������" };
char* ca_name[] = { "�θ��θ�", "��컧��", "��������", "���ȴ���", "�߱׵��" };
char* ma_name[] = { "�ϻ��", "�̻��", "����", "����", "�����" };

int main_menu();
void cust_in(struct customer in[]);
void cust_ran(struct customer in[]);
void show_cust(struct customer out[]);

int main()
{
	/*	����)	�� �̸�, ���� ��, �Ŵ�����
				-------------------------
				�� ���� ���� ���α׷� v1.6
				-------------------------
				1. �� ���� ���� �Է�. �� scanf()
				2. �� ���� ���� �Է�.
				3. �� ���� ����.
				4. ����.
				-------------------------
				�޴� ����:	*/

	srand(time(NULL));
	struct customer cu[5] = { 0 };

	while (1) {
		switch (main_menu()) {
		case 1:
			cust_in(cu);	break;
		case 2:
			cust_ran(cu);	break;
		case 3:
			show_cust(cu);	break;
		case 4:
			printf("���� �����մϴ�.\n");
			exit(0);
		default:
			printf("�߸��� �޴��� �����ϼ̽��ϴ�.\n");
		}
	}
}

int main_menu()
{
	printf("-------------------------\n");
	printf("�� ���� ���� ���α׷� v1.6\n");
	printf("-------------------------\n");
	printf("1. �� ���� ���� �Է�.\n");
	printf("2. �� ���� ���� �Է�.\n");
	printf("3. �� ���� ����.\n");
	printf("4. ����.\n");
	printf("-------------------------\n");
	printf("�޴� ����: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}
void cust_in(struct customer in[])
{
	printf("�� ����: ");
	scanf("%s", &in[0].name);
	printf("������: ");
	scanf("%s", &in[0].ca.name);
	printf("�Ŵ�����: ");
	scanf("%s", &in[0].ma.name);
	printf("\n");
	printf("�� ������ �������� �ԷµǾ����ϴ�.\n");
}
void cust_ran(struct customer in[])
{
	for (int i = 0; i < 5; i++) {
		strcpy(in[i].name, name[rand() % 5]);
		strcpy(in[i].ca.name, ca_name[rand() % 5]);
		strcpy(in[i].ma.name, ma_name[rand() % 5]);
	}
	printf("�� ������ �������� �ԷµǾ����ϴ�.\n");
}
void show_cust(struct customer out[])
{
	for (int i = 0; i < 5; i++) {
		if (strcmp(out[i].name, "") == 0) {		// out[i].name�� ���� ""�� ���ٸ�
			break;
		}
		printf("%d�� �� �̸�: %s\n", i + 1, out[i].name);
		printf("%d�� �� ������: %s\n", i + 1, out[i].ca.name);
		printf("%d�� �� �Ŵ���: %s\n", i + 1, out[i].ma.name);
		printf("\n");
	}
}
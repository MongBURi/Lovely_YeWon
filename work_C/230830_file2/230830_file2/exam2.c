#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct _PERSON {
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} PERSON;

int main_menu();
void write_preson();
void read_person();

const char* name[] = { "�Ͽ���", "�̿���", "�￹��", "�翹��", "������" };
const int age[] = { 10, 15, 20, 25, 30 };
const char* tel[] = { "010-1234-1111", "010-1234-2222", "010-1234-3333", "010-1234-4444", "010-1234-5555" };
const char* addr[] = { "�޳���", "�޵���", "�޵���", "�ٴ帶��", "�ɾ��" };

int main()
{
	srand(time(NULL));

	switch (main_menu()) {
	case 1:
		write_preson();
		printf("���������� �ԷµǾ����ϴ�.\n");
		break;
	case 2:
		read_person();
		break;
	case 3:
		printf("���� �����մϴ�.\n");
		exit(0);
	default:
		printf("�߸��� �޴� �Է�!\n");
	}
}

int main_menu()
{
	printf("-------------------------\n");
	printf("���� ���� ���α׷� v1.0\n");
	printf("-------------------------\n");
	printf("1. ������ ������ ���� �Է�.\n");
	printf("2. ���Ͽ��� �о����.\n");
	printf("3. ����.\n");
	printf("-------------------------\n");
	printf("�޴� ����: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}

void write_preson()
{
	PERSON per_arr[10] = { 0 };
	FILE* fp = fopen("person.bin", "wb");
	for (int i = 0; i < 10; i++) {
		strcpy(per_arr[i].name, name[rand() % 5]);
		per_arr[i].age = age[rand() % 5];
		strcpy(per_arr[i].tel, tel[rand() % 5]);
		strcpy(per_arr[i].addr, addr[rand() % 5]);
		fwrite(&per_arr[i], sizeof(PERSON), 1, fp);
	}
	fclose(fp);
}

void read_person()
{
	PERSON temp = { 0 };
	FILE* fp = fopen("person.bin", "rb");
	int cnt = 1;
	while (fread(&temp, sizeof(PERSON), 1, fp) == 1) {
		printf("��ȣ:%d �̸�:%s ����:%d ��ȣ:%s �ּ�:%s\n", cnt++,
			temp.name, temp.age, temp.tel, temp.addr);
	}
	fclose(fp);
}
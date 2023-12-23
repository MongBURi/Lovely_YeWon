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

int main()
{
	PERSON son[2] = {
		{ "�޿���2", 10, "010-1234-0001", "�޳��� �䳢����2" },
		{ "�޿���2", 20, "010-5678-0002", "�޳��� �������2" }
	};

	// ���� ����
	FILE* fp = fopen("person_arr.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ���� ����!\n");
		return -1;
	}
	fwrite(&son[0], sizeof(PERSON), 1, fp);	// &son[0] == son
	fwrite(&son[1], sizeof(son[1]), 1, fp);	// &son[1] == son + 1
	printf("���Ͽ� ���������� ����Ǿ����ϴ�.\n");
	fclose(fp);

	// ���� �б�
	FILE* fp3 = fopen("person_arr.bin", "rb");
	if (fp3 == NULL) {
		printf("���� �б� ���� ����!\n");
		return -1;
	}
	PERSON temp3 = { 0 };
	while (fread(&temp3, sizeof(temp3), 1, fp3) == 1) {
		printf("�̸�:%s ����:%d ��ȭ:%s �ּ�:%s\n", temp3.name, temp3.age, temp3.tel, temp3.addr);
	}
	fclose(fp3);
}
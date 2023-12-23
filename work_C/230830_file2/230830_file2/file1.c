#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct _PERSON {	// �ƹ��� �ǹ� ����.
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} PERSON;	// ����ü ������ �̸�.

int main()
{
	PERSON son1 = { "�޿���", 10, "010-1234-0001", "�޳��� �䳢����" };
	PERSON son2 = { "�޿���", 20, "010-5678-0002", "�޳��� �������" };

	// ���� ����.
	FILE* fp = fopen("person.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ���� ����!\n");
		return -1;	// ���������� '0'�� success(����)�ڵ�� ��. '-1' ������ ��. 
	}
	fwrite(&son1, sizeof(son1), 1, fp); // sizeof(son1) == sizeof(PERSON)
	fwrite(&son2, sizeof(son2), 1, fp);
	printf("���Ͽ� ���������� ����Ǿ����ϴ�.\n");
	fclose(fp);

	// ���� �б� ��� 1.
	/*FILE* fp2 = fopen("person.bin", "rb");
	if (fp2 == NULL) {
		printf("���� �б� ���� ����!\n");
		return -1;
	}
	PERSON temp = { 0 };	// ���Ͽ��� ����ü ������ �о� �����ϴ� �� ����ü.
	fread(&temp, sizeof(temp), 1, fp2);
	printf("�̸�:%s ����:%d ��ȭ:%s �ּ�:%s\n", temp.name, temp.age, temp.tel, temp.addr);
	fread(&temp, sizeof(temp), 1, fp2);
	printf("�̸�:%s ����:%d ��ȭ:%s �ּ�:%s\n", temp.name, temp.age, temp.tel, temp.addr);
	fclose(fp2);	*/

	// ���� �б� ��� 2.
	FILE* fp3 = fopen("person.bin", "rb");	// �б� ���ؼ��� ������ �̹� �־�� ��.
	if (fp3 == NULL) {
		printf("���� �б� ���� ����!\n");
		return -1;
	}
	PERSON temp3 = { 0 };	// ù ������ �о temp�� ��� ���(�ݺ�)
	// ���Ͽ��� ���������� ����ü 1���� �о��ٸ� ��	������ 1�� �����µ� ������ ������ ���ϰ��� 1�� �ƴ� ���� ����
	while (fread(&temp3, sizeof(temp3), 1, fp3) == 1) {
		printf("�̸�:%s ����:%d ��ȭ:%s �ּ�:%s\n", 
			temp3.name, temp3.age, temp3.tel, temp3.addr);
	}
	fclose(fp3);
}
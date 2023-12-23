#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.h"
#include "menu.h"

void file_write_rand(ADDR ad[], char filename[], int len)
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return;
	}

	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}

void file_write(ADDR ad, char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_read(char filename[])
{
	// �����Ͱ� ������ "�����Ͱ� �������� �ʽ��ϴ�" ���� �޽����� ����Ͻÿ�
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �б� ����!\n");
		return;
	}
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;	// flag����: üũ�뵵�� ���� ������ �÷��׺������ �θ� ex)��߿÷�����
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		printf("%d�� �ּҷ�\n", count++);
		printf("ID: %d\n", ad.id);
		printf("�̸�: %s\n", ad.name);
		printf("��ȭ: %s\n", ad.tel);
		printf("�ּ�: %s\n", ad.addr);
		printf("Email: %s\n", ad.email);
		printf("\n");
		check = 1;	// while���� �������� ������ �״��0, �����ϸ� 1�� �ٲ�
	}
	/*if (fread(&ad, sizeof(ad), 1, fp) != 1) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}*/
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_del_all(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		exit(0);
	}
	fclose(fp);
}

void file_search(char filename[], char in_name[])
{
	// �̸����� �˻�	
	ADDR ad = {0};
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (strcmp(ad.name, in_name) == 0) {	// �����ϸ� ���ϰ��� 0�� �´�
			printf("%d�� �ּҷ�\n", count++);
			printf("ID: %d\n", ad.id);
			printf("�̸�: %s\n", ad.name);
			printf("��ȭ: %s\n", ad.tel);
			printf("�ּ�: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}
// ���� �Լ� ù ��°
void file_delete(char filename[], char delname[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	// �� �������� �̷��� �ּ����� �޸�
	// �� ���Ͽ� �����Ͱ� 1�� �������� ������ ���� �ʴ� ���� [ex) 230905_�̸����ּ�]
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delname) != 0) {	// strcmp() == 0: ����/ != 0: �ٸ���
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].email, ad.email);
			i++;
			check = 1;
		}
	}
	fclose(fp);
	printf("������ ����(i): %d\n", i);
	if (check == 0 && strcmp(ad.name, delname) != 0) {	// && ���� ���� ��쵵 �߰�
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
		return;
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	for (i = 0; i < 200; i++) {
		if (del_arr[i].id == 0) {	// �迭�� �����Ͱ� ���ٸ� �ݺ��� Ż��
			break;
		}
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}
// ���� �Լ� �� ��°
void file_delete2(char filename[], char delname[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delname) != 0) {
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].email, ad.email);
			i++;
			check = 1;
		}
	}
	fclose(fp);
	printf("������ ����(i): %d\n", i);
	int size = i;	// ���� if���� �� ���� ������ ���� 0�� ����(size = 0;)
	if (check == 0 && strcmp(ad.name, delname) != 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
		return;
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	for (i = 0; i < size; i++) {	// i < 'size'�� ����Ͽ� �ݺ��� �� Ÿ���� ��
		printf("del_arr[%d]: %d\n", i, del_arr[i].id);
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}

void file_update(char filename[], char sname[], char dname[])
{
	// ������ ��� �Է��� ��� �޾ƾ��ұ�
	// 1. �˻��� �̸�, ������ �̸� �� 2���� �̸��� �Է¹���
	// 2. ���Ͽ��� �о�� �̸��� �˻��� �̸��� ���ؼ� ������
	//    ������ �̸����� �����ؼ� �� �迭�� ����
	// 3. ������ �迭�� ���Ͽ� ���� ����

	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	ADDR ad = { 0 };
	ADDR up_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, sname) == 0) {
			strcpy(up_arr[i].name, dname);
			check = 1;
		}
		else {
			strcpy(up_arr[i].name, ad.name);
		}
		up_arr[i].id = ad.id;
		strcpy(up_arr[i].tel, ad.tel);
		strcpy(up_arr[i].addr, ad.addr);
		strcpy(up_arr[i].email, ad.email);
		i++;
	}
	int size = i;
	fclose(fp);

	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
		return;
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}

	for (i = 0; i < size; i++) {
		fwrite(&up_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);
}
// �˻� (���� �� ��)
void file_search2(char filename[])
{	
	while (1) {
		switch (search_menu()) {
		case 1:	// �̸�
			printf("�̸� �Է�: ");
			char s_name[20] = { 0 };
			scanf("%s", &s_name);

			FILE* fp = fopen(filename, "rb");
			if (fp == NULL) {
				printf("���� ���� ����!\n");
				return -1;
			}

			ADDR temp = { 0 };
			int count = 1;
			int check = 0;
			while (fread(&temp, sizeof(temp), 1, fp)) {
				if (strcmp(temp.name, s_name) == 0) {
					printf("%d�� �ּҷ�\n", count++);
					printf("ID: %d\n", temp.id);
					printf("�̸�: %s\n", temp.name);
					printf("��ȭ: %s\n", temp.tel);
					printf("�ּ�: %s\n", temp.addr);
					printf("Email: %s\n", temp.email);
					printf("\n");
					check = 1;
				}
			}
			fclose(fp);
			if (check == 0 && (strcmp(temp.name, s_name) != 0)) {
				printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
			}
			system("pause");
			break;
		case 2:	// ���̵�
			printf("���̵� �Է�: ");
			int s_id = 0;
			scanf("%d", &s_id);

			FILE* fp2 = fopen(filename, "rb");
			if (fp2 == NULL) {
				printf("���� ���� ����!\n");
				return -1;
			}

			ADDR temp2 = { 0 };
			count = 1;
			check = 0;
			while (fread(&temp2, sizeof(temp2), 1, fp2)) {
				if (temp2.id == s_id) {
					printf("%d�� �ּҷ�\n", count++);
					printf("ID: %d\n", temp2.id);
					printf("�̸�: %s\n", temp2.name);
					printf("��ȭ: %s\n", temp2.tel);
					printf("�ּ�: %s\n", temp2.addr);
					printf("Email: %s\n", temp2.email);
					printf("\n");
					check = 1;
				}
			}
			fclose(fp2);
			if (check == 0 && (temp2.id == s_id)) {
				printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
			}
			system("pause");
			break;
		case 3:	// ����
			printf("���� �Է�: ");
			char s_email[20] = { 0 };
			scanf("%s", &s_email);

			FILE* fp3 = fopen(filename, "rb");
			if (fp3 == NULL) {
				printf("���� ���� ����!\n");
				return -1;
			}

			ADDR temp3 = { 0 };
			count = 1;
			check = 0;
			while (fread(&temp3, sizeof(temp3), 1, fp3)) {
				if (strcmp(temp3.email, s_email) == 0) {
					printf("%d�� �ּҷ�\n", count++);
					printf("ID: %d\n", temp3.id);
					printf("�̸�: %s\n", temp3.name);
					printf("��ȭ: %s\n", temp3.tel);
					printf("�ּ�: %s\n", temp3.addr);
					printf("Email: %s\n", temp3.email);
					printf("\n");
					check = 1;
				}
			}
			fclose(fp3);
			if (check == 0 && (strcmp(temp3.email, s_email) != 0)) {
				printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
			}
			system("pause");
			break;
		case 4:	// ����		
			printf("���� �޴��� �ǵ��ư��ϴ�.\n");
			return;
		}
		system("cls");
	}
}

void file_search_name(char filename[], char name[])
{	
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (strcmp(ad.name, name) == 0) {
			printf("%d�� �ּҷ�\n", count++);
			printf("ID: %d\n", ad.id);
			printf("�̸�: %s\n", ad.name);
			printf("��ȭ: %s\n", ad.tel);
			printf("�ּ�: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_search_id(char filename[], char id[])
{	
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (ad.id == id) {
			printf("%d�� �ּҷ�\n", count++);
			printf("ID: %d\n", ad.id);
			printf("�̸�: %s\n", ad.name);
			printf("��ȭ: %s\n", ad.tel);
			printf("�ּ�: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_search_email(char filename[], char email[])
{	
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (strcmp(ad.name, email) == 0) {
			printf("%d�� �ּҷ�\n", count++);
			printf("ID: %d\n", ad.id);
			printf("�̸�: %s\n", ad.name);
			printf("��ȭ: %s\n", ad.tel);
			printf("�ּ�: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_search3(char filename[], char name[], char email[], int id)
{
	ADDR ad = { 0 };
	int count = 1;
	int check = 0;
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �˻� ����!\n");
		return;
	}
	while (fread(&ad, sizeof(ad), 1, fp)) {
		if (strcmp(ad.name, name) == 0 || strcmp(ad.email, email) == 0
			|| ad.id == id) {
			printf("%d�� �ּҷ�\n", count++);
			printf("ID: %d\n", ad.id);
			printf("�̸�: %s\n", ad.name);
			printf("��ȭ: %s\n", ad.tel);
			printf("�ּ�: %s\n", ad.addr);
			printf("Email: %s\n", ad.email);
			printf("\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}
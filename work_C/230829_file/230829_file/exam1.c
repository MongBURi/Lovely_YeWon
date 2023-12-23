#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct friend {
	char name[20];
	char sex;
	int age;
};

int main_menu();
void fren_write(struct friend fw);
void fren_read(struct friend fr);

int main()
{
	/*	����)	-------------------------
				���� ���� ���α׷� v1.0
				-------------------------
				1. ģ�� ���� ����.
				2. ģ�� ���� �б�.
				3. ����.
				-------------------------
				�޴� ����:	*/
	struct friend fren1 = { 0 };
	struct friend fren2 = { 0 };

	while (1) {
		switch (main_menu()) {
		case 1:							// case1: int a=10;(�Ұ���){int a=10;}(����) 
			fren_write(fren1);	break;
		case 2:
			fren_read(fren2);	break;
		case 3:
			printf("���� �����մϴ�.\n");
			exit(0);
		default:
			printf("�߸��� �޴� �Է�!\n");
		}		
	}
}

int main_menu()
{
	printf("-------------------------\n");
	printf("���� ���� ���α׷� v1.0\n");
	printf("-------------------------\n");
	printf("1. ģ�� ���� ����.\n");
	printf("2. ģ�� ���� �б�.\n");
	printf("3. ����.\n");
	printf("-------------------------\n");
	printf("�޴� ����: ");
	int menu;
	scanf("%d", &menu);
	return menu;
}
void fren_write(struct friend fw)
{
	FILE* fp = fopen("friend.bin", "wb");
	printf("�̸� �Է�: ");
	scanf("%s", fw.name);
	printf("���� �Է�: ");
	getchar();
	scanf("%c", &fw.sex);
	printf("���� �Է�: ");
	scanf("%d", &fw.age);
	fwrite(&fw, sizeof(fw), 1, fp);
	fclose(fp);
}
void fren_read(struct friend fr)
{
	FILE* fp = fopen("friend.bin", "rb");	
	fread(&fr, sizeof(fr), 1, fp);
	printf("ģ�� �̸�: %s\n", fr.name);
	printf("ģ�� ����: %c\n", fr.sex);
	printf("ģ�� ����: %d\n", fr.age);
	fclose(fp);
}
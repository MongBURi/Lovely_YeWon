#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	char* name[] = { "�Ͽ���", "�̿���", "�￹��", "�翹��", "������" };
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputc('L', fp);
	fputc('O', fp);
	fputc('V', fp);
	fputc('E', fp);
	fputc('\n', fp);
	fputs("������ ���� \n", fp);
	fputs("������ ������ \n", fp);
	for (int i = 0; i < 5; i++) {
		fputs(name[i], fp);
		fputc('\n', fp);
	}

	fclose(fp);

}
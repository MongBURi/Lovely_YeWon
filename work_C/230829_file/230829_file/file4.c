#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	char str[30] = { 0 };
	int ch = 0;	// int �ƽ�Ű�ڵ�� ���� �ϳ��ϳ� �о����.
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	/*
	for (int i = 0; i < 5; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}
	// \n�� ���� ������ read
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	for (int i = 0; i < 5; i++) {
		fgets(str, sizeof(str), fp);
		printf("%s", str);
	}	*/

	while ((ch = fgetc(fp)) != EOF) {		
		printf("%c", ch);
	}
	/*while (1) {
		ch = fgetc(fp);
		if (ch == EOF) {			
			break;
			printf("%c", ch);
		}
	}	*/

	fclose(fp);
}
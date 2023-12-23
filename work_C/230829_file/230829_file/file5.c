#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch = 0;
	if (src == NULL || des == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	
	// ���� ������ ���� 1���� ����. (�� �ھ� �а�/����, ������ ������ �о����)
	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}

	// ������ ���� �����ߴٸ�
	if (feof(src) != 0) {
		puts("���Ϻ��� �Ϸ�!");
	}
	else {
		puts("���Ϻ��� ����!");
	}

	fclose(src);
	fclose(des);
}
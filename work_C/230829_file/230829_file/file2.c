#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{	
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		printf("파일오픈 실패!");
		return -1;
	}

	for (int i = 0; i < 3; i++) {
		char ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);

}
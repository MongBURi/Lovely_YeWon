#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	char* name[] = { "일예원", "이예원", "삼예원", "사예원", "오예원" };
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	fputc('L', fp);
	fputc('O', fp);
	fputc('V', fp);
	fputc('E', fp);
	fputc('\n', fp);
	fputs("예원이 졸예 \n", fp);
	fputs("예원이 세젤귀 \n", fp);
	for (int i = 0; i < 5; i++) {
		fputs(name[i], fp);
		fputc('\n', fp);
	}

	fclose(fp);

}
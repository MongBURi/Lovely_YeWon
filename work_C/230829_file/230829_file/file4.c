#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	char str[30] = { 0 };
	int ch = 0;	// int 아스키코드로 문자 하나하나 읽어들임.
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}
	/*
	for (int i = 0; i < 5; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}
	// \n을 만날 때까지 read
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
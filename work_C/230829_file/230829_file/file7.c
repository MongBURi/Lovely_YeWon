#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("fiend.txt", "rt");
	int ret;

	while (1) {
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF) {
			break;			
		}
		printf("%s %c %d \n", name, sex, age);
	}
	fclose(fp);
}
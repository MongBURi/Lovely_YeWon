#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int num1, int num2);

int main()
{
	int result;
	result = Add(3, 4);
	printf("µ¡¼À°á°ú1: %d \n", result);
	result = Add(5, 8);
	printf("µ¡¼À°á°ú2: %d \n", result);
}

int Add(int num1, int num2)
{
	return num1 + num2;
}
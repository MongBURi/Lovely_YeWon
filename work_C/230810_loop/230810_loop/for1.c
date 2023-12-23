#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int i = 0; i < 3; i++) {
		printf("Hi \n");
	}

	int j = 0;
	while (j < 3) {
		printf("while Hi \n");
		j++;
	}
}
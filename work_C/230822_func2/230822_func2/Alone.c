#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int random = 0;
	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		random = (rand() % 45) + 1;
		printf("%d\t", random);
	}
}
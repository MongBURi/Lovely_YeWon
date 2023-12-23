#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_lotto(int lotto[]);

int main()
{	
	int lotto[6] = { 0 };
	srand(time(NULL));	

	show_lotto(lotto);

	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d  ", lotto[i]);
	}
}

void show_lotto(int lotto[])
{
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1;
		printf("%d  ", lotto[i]);
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}	
}
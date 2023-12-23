#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { 3, 8, 1, 4 };		

	for (int i = 0; i < 4; i++) {		
		for (int j = i + 1; j < 4; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("%d\t", arr[i]);
	}

}
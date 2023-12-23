#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	1차원 배열 dmz에 지뢰가 아래처럼 매설되어 있음.
			*  B  *  B  *
			1  1  2  1  1	*/

	char dmz[] = { '*', '*', '*', 'B', 'B' };
	int arr[5] = { 0 };

	const int START = 0;	// 상수변수 (변수의 값을 변경할 수 없다)
	const int END = 4;
	// #define END 4		// 상수변수
	for (int i = 0; i < 5; i++) {
		if (dmz[i] == 'B') {
			arr[i] += 1;							// arr[i]++			
		}
		if (dmz[i - 1] == 'B' && i != START) {		// i != 0
			arr[i]++;
		}
		if (dmz[i + 1] == 'B' && i != END) {		// i != 5
			arr[i]++;
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}


	/*
	if (dmz[0] == '*') {
		printf("안전지대\n");
	}
	else if (dmz[1] == 'B') {
		printf("지뢰\n");
	}	*/
	
}
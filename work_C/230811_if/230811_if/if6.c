#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("시작! ");
	//       1번     2번      4번				// 1번→2번→3번→4번 →2번→3번→4번 →2번...
	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0) {		//  ┐	"2의 배수이거나 3의 배수"
			continue;							// 3번	if (num % 2 == 0 && num % 3 == 0)
		}										//  ┘		   "2의 배수이면서 3의 배수"
		printf("%d, ", num);
	}
	printf("끝! \n");

}
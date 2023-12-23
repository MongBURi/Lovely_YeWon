#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0, num = 0;

	while (1) {
		sum += num;
		if (sum > 5000) {
			break;				// 자신이 속한 반복문만 탈출 가능
		}
		//break; // (홀로 쓸 경우)break 만나면 바로 탈출
		num++;
	}
	printf("sum: %d \n", sum); // rea code(데드 코드):
	printf("num: %d \n", num); // (무한반복문 때문에)실행되지 않는 코드

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	// 입/출력
#include <stdlib.h>	// srand() 표준 라이브러리
#include <time.h>	// time() 시간

void check_odd(int a[]);

int main()
{
	/*
	문제1)	1. main()에서 10개의 숫자를 저장하는 1차원 배열 생성.
			2. 랜덤하게 10개의 숫자를 배열에 저장.
			3. 배열의 주소값을 매개변수로 전달하고 홀,짝을 구분하여 출력하는 함수 작성.
				ex) 번호 랜덤으로 뽑는 방법(로또 적용 가능) ↓		*/
				/*
	srand(time(NULL));					→ 매번 다른 시드값 생성.
	int random = 0;						→ 난수를 저장할 변수.
	for (int i = 0; i < 6; i++) {		→ 6회 반복.
		random = (rand() % 45) + 1;		→ 난수 1~45까지 생성.
		printf("%d\n", random);
	}	*/
	int arr[10] = { 0 };
	srand(time(NULL));
	int random = 0;
	for (int i = 0; i < 10; i++) {
		random = (rand() % 45) + 1;
		arr[i] = random;
		// printf("arr[%d] = %d\n", i, arr[i]);
	}	
	check_odd(arr);
}

void check_odd(int a[])
{
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 <= 0) {
			printf("arr[%d] = %d\t짝수이다.\n", i, a[i]);
		}
		else {
			printf("arr[%d] = %d\t홀수이다.\n", i, a[i]);
		}
	}	
}

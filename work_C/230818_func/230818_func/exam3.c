#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_sort(int n1, int n2, int n3);

int main()
{
	/*
	문제3)	1. 3개의 정수를 main()에서 입력받아서 한꺼번에 매개변수에 전달.
			2. 함수에서 3개의 숫자를 크기 순서대로 출력.
			3. 함수명: my_sort
			4. if (n1 > n2 > n3): 잘못된 문법
			5. 출력 형태:
				n1이 제일 크고 n2가 두번째 크고 n3가 제일 작음 → (n1 > n2 > n3)
				n3이 제일 크고 n1가 두번째 크고 n2가 제일 작음 → (n3 > n1 > n2)	*/
			
	printf("3개의 정수를 입력하세요:\n");
	int n1, n2, n3;
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	my_sort(n1, n2, n3);
}

void my_sort(int n1, int n2, int n3)
{	
	/*
	 1 > 2 > 3
	 1 > 3 > 2
	 2 > 1 > 3
	 2 > 3 > 1
	 3 > 1 > 2
	 3 > 2 > 1	*/
	if (n1 > n2 && n2 > n3) {
		printf("%d > %d > %d", n1, n2, n3);
	}
	else if (n1 > n3 && n3 > n2) {
		printf("%d > %d > %d", n1, n3, n2);
	}
	else if (n2 > n1 && n1 > n3) {
		printf("%d > %d > %d", n2, n1, n3);
	}
	else if (n2 > n3 && n3 > n1) {
		printf("%d > %d > %d", n2, n3, n1);
	}
	else if (n3 > n1 && n1 > n2) {
		printf("%d > %d > %d", n3, n1, n2);
	}
	else if (n3 > n2 && n2 > n1) {
		printf("%d > %d > %d", n3, n2, n1);
	}
	else {
		printf("알 수 없음\n");
	}


}
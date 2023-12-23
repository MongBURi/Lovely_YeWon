#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	// 입력 받은 num값을 비교(한 번)
	if (num < 0) {							// '단일if문' if가 독자적으로 쓰일 경우
		printf("입력 값은 0보다 작다. \n");	// num이 0보다 작으면(음수), 출력됨
	}
	// 입력 받은 num값을 비교(두 번)
	if (num > 0) {
		printf("입력 값은 0보다 크다. \n");	// num이 0보다 크면(양수), 출력됨
	}
	// 입력 받은 num값을 비교(세 번 비교함)
	if (num == 0) {
		printf("입력 값은 0이다. \n");		// num이 0과 같으면(0), 출력됨
	}

	// 				↓↓↓↓↓ < 간결화 >
	
	// 세 가지 경우의 수를 적용
	if (num < 0) {
		printf("입력값은 0보다 작다. \n");
	}
	else if (num > 0) {
		printf("입력값은 0보다 크다. \n");
	}
	else {								// else는 옵션, 생략해도 괜찮음
		printf("입력값은 0이다. \n");		// if, else if조건을 제외한 모든 조건
	}

	// 홀짝 두 가지 경우의 수 있을 때 많이 사용됨↓
	if (num < 0) {
		printf("입력값은 0보다 작다. \n");
	}
	else {
		printf("입력값은 0보다 크거나 같다. \n");
	}

	// ※주의사항※
	// if는 무조건 한 번만 사용해야 한다
	// else if는 여러 번 사용 가능하다
	// else를 사용하는 경우에는 조건을 선언하지 않는다
	// ex) else (조건 닮) <- 잘못됨, else는 ~제외한 모든 조건이라 조건이 필요 없음
}
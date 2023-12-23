#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

typedef struct _CAR {
	char num[20];
} CAR;

int main()
{	
	printf("차량번호 4자리를 입력해 주십시오. : ");	// 차량번호 입력 안내문 출력
	int car_num[4] = { 0 };							// 차량번호 저장 배열 변수

	for (int i = 0; i < 4; i++) {						// 배열 인덱스에 차량번호 1개씩 담기 위해 4번(4자리) 반복
		if (scanf("%1d", &car_num[i]) == 0) {			// 만약 입력한 값이 숫자가 아니라면
			printf("숫자로 다시 입력하여 주십시오.\n");	// 다시 입력하라고 안내문 출력
			rewind(stdin);								// 문자 입력시 버퍼에 남아 있는 '공백'과 '\n' 삭제
			i = (i - i) - 1;							// 문자 입력시 i는 -1로 재설정 됨
		}
		// if문 탈출시 i++되어 결국 i는 0이 된다(= car_num[0]부터 다시 입력이 가능)
	}

	// [디버깅] 차량번호(한 자리씩 x 4번 반복)
	for (int i = 0; i < 4; i++) {
		printf("car_num[%d] = %d  ", i, car_num[i]);
	}
	printf("\n");

	// 입력한 차량번호가 맞는지 재확인 안내문 출력
	printf("입력하신 차량번호\n");
	printf("\n");
	printf("      ");
	for (int i = 0; i < 4; i++) {	// 차량번호 한 자리씩x네 번 출력
		printf("%d", car_num[i]);
	}
	printf("\n");
	printf("\n");

	printf("1. 맞습니다.  2.아닙니다.\n");
	int answer = sub_menu();
	if (answer == 2) {

	}


}

int sub_menu()
{
	int menu;
	scanf("%d", &menu);
	return menu;
}
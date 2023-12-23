#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*					< 학습목표 >
				st.4의 실습 내용을
				st.5에서 'scanf()'를 사용하여 처리하기. (초기값 사용하지 않음)	*/

struct person {
	char name[20];
	char tel[20];
	int age;
};

int main()
{ 
	struct person arr[3] = { 0 };
	
	for (int i = 0; i < 3; i++) {
		printf("이름 입력: ");
		scanf("%s", arr[i].name);	// 문자열 공백은 입력되지 않음.
		printf("번호 입력: ");
		scanf("%s", arr[i].tel);
		printf("나이 입력: ");
		scanf("%d", &arr[i].age);		
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("이름: %s \n", arr[i].name);
		printf("번호: %s \n", arr[i].tel);
		printf("나이: %d \n", arr[i].age);
		printf("\n");
	}
}
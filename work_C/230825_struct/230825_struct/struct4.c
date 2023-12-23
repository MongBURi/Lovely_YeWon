#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person {
	char name[20];
	char tel[20];
	int age;
};

int main()
{										// 구조체 배열 'arr[]'의 초기화
	struct person arr[3] = {			// 3명 뿐이여서 일일이 넣어도 괜찮다.
		{"일예원", "010-1234-0001", 20},
		{"이예원", "010-1234-0002", 30},
		{"삼예원", "010-1234-0003", 40}
	};

	for (int i = 0; i < 3; i++) {
		printf("%s %s %d \n", arr[i].name, arr[i].tel, arr[i].age);
	}

}
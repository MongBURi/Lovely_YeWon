#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person {
	char name[20];
	char tel[20];
	int age;
};

int main()
{										// ����ü �迭 'arr[]'�� �ʱ�ȭ
	struct person arr[3] = {			// 3�� ���̿��� ������ �־ ������.
		{"�Ͽ���", "010-1234-0001", 20},
		{"�̿���", "010-1234-0002", 30},
		{"�￹��", "010-1234-0003", 40}
	};

	for (int i = 0; i < 3; i++) {
		printf("%s %s %d \n", arr[i].name, arr[i].tel, arr[i].age);
	}

}
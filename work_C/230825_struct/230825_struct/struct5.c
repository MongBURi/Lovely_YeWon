#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*					< �н���ǥ >
				st.4�� �ǽ� ������
				st.5���� 'scanf()'�� ����Ͽ� ó���ϱ�. (�ʱⰪ ������� ����)	*/

struct person {
	char name[20];
	char tel[20];
	int age;
};

int main()
{ 
	struct person arr[3] = { 0 };
	
	for (int i = 0; i < 3; i++) {
		printf("�̸� �Է�: ");
		scanf("%s", arr[i].name);	// ���ڿ� ������ �Էµ��� ����.
		printf("��ȣ �Է�: ");
		scanf("%s", arr[i].tel);
		printf("���� �Է�: ");
		scanf("%d", &arr[i].age);		
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("�̸�: %s \n", arr[i].name);
		printf("��ȣ: %s \n", arr[i].tel);
		printf("����: %d \n", arr[i].age);
		printf("\n");
	}
}
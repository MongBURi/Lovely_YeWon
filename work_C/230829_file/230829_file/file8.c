#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
					// �ٸ� ���α׷��� ���� ������ �ƴ�.

// ����ü�� ���̳ʸ� ��带 ���� ����Ѵ�.
typedef struct fren {
	char name[10];
	char sex;
	int age;
} Friend;	// ����ü ����

int main()
{
	FILE* fp;
	Friend myfren1;	// ����ü ����
	Friend myfren2;

	/*** file write ***/
	fp = fopen("friend.bin", "wb");
	printf("�̸�, ����, ���� �� �Է�: ");
	scanf("%s %c %d", myfren1.name, &myfren1.sex, &myfren1.age);
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
	// (�ּҰ�(�����ͺ���), ����üũ��, ����ü �� ���(�̸���������), fp)
	fclose(fp);

	/*** file read ***/
	fp = fopen("friend.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);	// '(void*)' ���� ����.
	printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
	int xpos;
	int ypos;
};

struct preson {
	char name[20];
	char tel[20];
	int age;
};

int main()
{
	struct point pos = { 10, 20 };
	struct preson man = { "¯����", "010-1234-1234", 3 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("�̸�:%s ��ȭ��ȣ:%s ����:%d�� \n", man.name, man.tel, man.age);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int num1, int num2);
void ShowAddResult(int num);
int ReadNum(void);
void HowToUseThisProg(void);

int main()
{
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
}

int Add(int num1, int num2)
{
	return num1 + num2;
}
void ShowAddResult(int num)
{
	printf("������� ���: %d \n", num);
}
int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}
void HowToUseThisProg(void)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	// 'C:/' �ٷ� �ؿ��� ������ �������� ���� �Ұ�.
	// 'C:/����' ���� �����ϴ�.
	
	// 1. ���� ���� 'fopen(): ǥ���Լ�', (wt: ����, text���/rt: �б�read)
	//				�Ű����� (���� �̸�, write text������)�� ���� �����
	// w: ������ ������ �����ϰ� �����. (���� ���� ����) / ������ ������ ���� ������ ���� ����.
	// a: ������ ������ �����ϰ� �ڿ� �ٿ���.
	// r: ������ ������ �о��.
	FILE* fp = fopen("date.txt", "at");		// 'D:/', 'D:\\' �� D����̺� �ؿ� ����
	if (fp == NULL) {
		printf("���� ���� ����!");
		return -1; // =exit(0);
	}

	fputc('K', fp);	// f���� put����־�� char����
	fputc('F', fp);
	fputc('C', fp);
	fclose(fp);
	
}
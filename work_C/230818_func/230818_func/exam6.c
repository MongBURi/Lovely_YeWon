#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void level(int n1, int n2, int n3);
#include <stdlib.h>	// exit()

int main()
{
	/*
	����6)	��,��,�� ������ �Է¹޾Ƽ� ����, ��հ��� ���ϴ� ���α׷�.
			����1) ���� �Է��� main()���� �Է¹���.
			����2) �Է¹޴� ������ 0~100������ ���ڸ� �Է¹޵��� ���� üũ�ϱ�.
					�� �����ϰ� �� ���� üũ�ϸ� ��(����� �Ǽ��� �߸� �Է��ϸ� �����޼��� ����ϰ� ���� ó��)
			����3) ��,��,�� ������ ������ �Ű������� �����Ͽ� ����, ��հ��� ����ϴ� �Լ� �ۼ�.
			����4) ����3���� �׽�Ʈ�Ϸ� ���Ŀ� �߸��Է°� üũ�� Ȯ���ϱ�(�Ǽ��� �Է��ϸ� ���Է� ���� �� �ֵ��� ó��)
					�� �ð����� ������ ������ �غ��� �ƴϸ� �н��ϱ� �ٶ�	*/

	int kor = 0, eng = 0, math = 0;	
	printf("���� ���� �Է�: ");
	scanf("%d", &kor);
	if (kor < 0 || kor > 100) {			// 0���� �۰ų� 100���� Ŭ ���
		printf("�߸��� ���� �Է�\n");
		exit(0);						// ���α׷� ���� ���� �Ǵ� return 0;
	}
	printf("���� ���� �Է�: ");
	scanf("%d", &eng);
	if (eng < 0 || eng > 100) {
		do {
			printf("���� ���� �ٽ� �Է�: ");
			scanf("%d", &eng);
		} while (eng < 0 || eng > 100);
	}
	printf("���� ���� �Է�: ");
	scanf("%d", &math);
	if (math < 0 || math > 100) {
		do {
			printf("���� ���� �ٽ� �Է�: ");
			scanf("%d", &math);
		} while (math < 0 || math > 100);
	}
	level(kor, eng, math);	
}

void level(int n1, int n2, int n3)
{	
	int total = n1 + n2 + n3;
	int avg = total / 3;
	printf("����: %d��, ���: %d��", total, avg);
}
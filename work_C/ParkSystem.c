#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct time { // ����ü�� �̿��Ͽ� �ð� ���� �����Ѵ�. 
	int hour, min;
};

int main() {
	struct time ent; // ���� �ð� ����ü
	struct time exit; // ���� �ð� ����ü
	int hour, min; // �ð�, �� ���� 

	printf("------------------------\n");
	printf("���� ��� ����� \n");
	printf("------------------------\n");   // ���� ��� ����� Ʋ �ۼ�	
	printf("������ȣ %d\n");
	printf("------------------------\n");

	srand(time(NULL));
	int ent_hour[2] = { 0 };
	int ent_min[2] = { 0 };
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 1; j++) {
			ent_hour[i] = (rand() % 15) + 06; // �ð� ���� ���� ���� �Է� �ޱ� (06��~21�ñ��� �̿밡��)
			ent_min[j] = (rand() % 59); // �� ���� ���� ���� �Է� �ޱ� 
			printf("���� �ð�: %d : %d \t", ent_hour[i], ent_min[j]);
			printf("\n");
		}
	}
	printf("���� �ð��� �Է��ϼ��� =>  ");
	scanf("%d : %d", &exit.hour, &exit.min);
	hour = exit.hour - (ent_hour[0]);
	min = exit.min - (ent_min[0]);
	printf("�̿� �ð� : %d : %d", hour, min);
}


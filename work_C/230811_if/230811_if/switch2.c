#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	printf("A ~ E ���� �Է�: ");
	scanf("%c", &c);

	switch (c) {
	case 'A':					// ������ ���ڸ� case�� '����'(��������ǥ!!)
		printf("A�� ONE \n");
		break;
	case 'B':
		printf("B�� TWO \n");
		break;
	case 'C':
		printf("C�� THREE \n");
		break;
	case 'D':
		printf("D�� FOUR \n");
		break;
	case 'E':
		printf("E�� FIVE \n");
		break;
	default:
		printf("I don't konw! \n");
	}

}
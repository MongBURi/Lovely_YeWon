#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_number();
char get_char();

int main() // 'void main()' �� �̷��� ����ص� �������
{
	// "'��ȯ���� ������Ÿ��' '�Լ���()' '{return��}'"
	int n = get_number();			// return�� 200�� ���� ���� n�� ����.
	printf("���Ϲ��� ��: %d\n", n);

	char c = get_char();
	printf("���Ϲ��� ����: %c\n", c);
	/*						�Ȱ����� �躯���� ���� ���� ����� �� �� ����.
				������		������ ����ؼ� ���ϰ��� ���� �ʰ�,
							���� �Լ� ���ϰ��� %c�� ����	*/
	printf("�Լ� ���ϰ�: %c\n", get_char());
}

int get_number()
{
	int n = 200;
	return n;		// �Լ��� ����Ǳ� ���� return���� ȣ���� ������ �ǵ��� ��.
					// ���ϰ��� ������ �ϳ��� ���� ����
}

char get_char()
{
	char c = 'B';
	return c;
}

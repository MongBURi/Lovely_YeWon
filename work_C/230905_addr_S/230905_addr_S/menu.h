#ifndef __MENU_H__	// (��� �ü�� ����)
#define __MENU_H__	// '__MENU_H__': �̸��� �� ������� / '_MENU_H'�̷��� ���⵵ ��

typedef enum {
	MAIN_RAND_INS = 1,	// ���� ���� �޴� // �ƹ��͵� �� �ϸ� 0���� �ο�
	MAIN_DIR_INS,		// ���� �Է� �޴�
	MAIN_ALL_DEL,		// ��ü ���� �޴�
	MAIN_VIEW,			// ��ü ����
	MAIN_SEARCH,		// �˻�
	MAIN_DELETE,		// ����
	MAIN_UPDATE,		// ����
	MAIN_EXIT			// ����
} MAIN_MENU;

// #pragma once	// ������� �ߺ����(����) ����: '�� ���� ����ϰڴ�'�� ��.(win����)

extern int main_menu();	// extern: �ڵ����� ������ ���� ���� / �ڱ� ��Ÿ��(���� ��)
int search_menu();
#endif

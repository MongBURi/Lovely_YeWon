#ifndef __MENU_H__	// (모든 운영체제 공용)
#define __MENU_H__	// '__MENU_H__': 이름은 내 마음대로 / '_MENU_H'이렇게 쓰기도 함

typedef enum {
	MAIN_RAND_INS = 1,	// 랜덤 생성 메뉴 // 아무것도 안 하면 0부터 부여
	MAIN_DIR_INS,		// 직접 입력 메뉴
	MAIN_ALL_DEL,		// 전체 삭제 메뉴
	MAIN_VIEW,			// 전체 보기
	MAIN_SEARCH,		// 검색
	MAIN_DELETE,		// 삭제
	MAIN_UPDATE,		// 수정
	MAIN_EXIT			// 종료
} MAIN_MENU;

// #pragma once	// 헤더파일 중복사용(꼬임) 방지: '한 번만 사용하겠다'는 뜻.(win전용)

extern int main_menu();	// extern: 자동으로 붙지만 생략 가능 / 자기 스타일(쌤은 씀)
int search_menu();
#endif

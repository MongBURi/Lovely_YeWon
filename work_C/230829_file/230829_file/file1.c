#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	// 'C:/' 바로 밑에는 관리자 권한으로 생성 불가.
	// 'C:/폴더' 에는 가능하다.
	
	// 1. 파일 오픈 'fopen(): 표준함수', (wt: 쓰기, text모드/rt: 읽기read)
	//				매개변수 (파일 이름, write text쓰기모드)로 파일 열어라
	// w: 기존의 내용을 무시하고 덮어씌움. (기존 내용 삭제) / 파일이 있으면 쓰고 없으면 새로 생성.
	// a: 기존의 내용을 보존하고 뒤에 붙여씀.
	// r: 파일의 내용을 읽어옴.
	FILE* fp = fopen("date.txt", "at");		// 'D:/', 'D:\\' → D드라이브 밑에 저장
	if (fp == NULL) {
		printf("파일 오픈 실패!");
		return -1; // =exit(0);
	}

	fputc('K', fp);	// f파일 put집어넣어라 char문자
	fputc('F', fp);
	fputc('C', fp);
	fclose(fp);
	
}
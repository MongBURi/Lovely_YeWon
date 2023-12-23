#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // 문자열 처리 관련

struct person {		// 구조체 정의 (정의로는 동작하지 않는다)
	char name[20];	// 20사이즈 넘어가면 짤림
	char tel[20];
	int age;
};

int main()
{
	struct person man1, man2;	// 구조체 변수 man1, man2
	// '안성준'을 man1, name에 복사
	strcpy(man1.name, "안성준");			// "스트링카피": 문자열 복사 기능
	strcpy(man1.tel, "010-1234-5678");
	man1. age = 23;

	printf("이름 입력: ");	scanf("%s", man2.name);	// 배열변수여서 '&'가 필요 없음
	printf("번호 입력: ");	scanf("%s", man2.tel);
	printf("나이 입력: ");	scanf("%d", &(man2.age));	// 정수라서 '&'가 필요
	
	printf("이름: %s \n", man1.name);
	printf("번호: %s \n", man1.tel);
	printf("나이: %d \n", man1.age);
	
	printf("이름: %s \n", man2.name);
	printf("번호: %s \n", man2.tel);
	printf("나이: %d \n", man2.age);

}
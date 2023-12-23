#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*						< 학습목표 >
					◇ 구조체를 왜 써야하는가?
					ㄱ) 하나의 구조체 안에 여러 데이터타입 사용 가능.
					◇ 구조체를 어떻게 써야하는가?

		ex)	학생 관리 프로그램 만들기(100명) : 이름, 전화번호, 나이	*/

	char name1[20];
	char tel1[20];
	int age1[20];
	// → 일반 변수로 관리하기 불편하다. (300개 필요함)

	// 일반 변수가 힘드니깐 배열을 사용하자.
	char name[100][20];
	char tel1[100][20];
	int age1[100];
	// → 배열을 사용하면 일반 변수를 사용하는 것보다 개수는 많이 줄지만
	//   프로그래밍을 하기에는 역시 불편하다.

	// 한 명의 학생(→ 객체) 정보를 가지는 구조(틀→ 클래스). ex)붕어빵 틀
	struct student {						// C: 구조체
		char name[20];						// DB: 엔티티
		char tel[20];						// 객체지향언어: 클래스
		int age;
	};


	// 1명의 학생정보를 사용하는 프로그램.
	struct student st;			// 구조체 변수 'st'

	// 100명의 학생정보를 사용하는 프로그램.
	struct stucent arr[100];	// 구조체 배열 변수 'arr'

}
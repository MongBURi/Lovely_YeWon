#include <stdio.h>

int main()
{
	// 1.아래의 다양한 정보들을 변수에 저장하여 출력
	/*
	--------------------
	수강생 정보 확인서
	--------------------
	이름: 홍길동
	나이: 200
	전화: 010-1234-4321
	주소: 조선 한양 홍대감댁 11번지
	키: 180.2cm
	몸무게: 78.5kg
	혈액형: B형
	--------------------
	*/
	char* aa = "수강생 정보 확인서";
	char* bb = "홍길동"; // name
	int cc = 200; // age
	char* dd = "010-1234-4321";	// tel
	char* ee = "조선 한양 홍대감댁 11번지"; // addr
	float ff = 180.2; // height
	float gg = 78.5; // weight
	char hh = 'B'; // blood

	printf("--------------------\n");
	printf("%s\n", aa);
	printf("--------------------\n");
	printf("이름: %s\n", bb);
	printf("나이: %d\n", cc);
	printf("전화: %s\n", dd);
	printf("주소: %s\n", ee);
	printf("키: %.1fcm\n", ff);
	printf("몸무게: %.1fkg\n", gg);
	printf("혈액형: %c형\n", hh);
	printf("--------------------\n");

	// 2.정수형 변수 a에 100저장. 정수형 변수 b에 200저장.
	//   정수형 변수 c에 a + b 결과값 저장하고 화면에 출력.
	int a = 100; // '초기화가 되어 있음'(변수를 생성하고 난 직후 값을 대입)
	int b = 200;
	// int c; 변수를 생성하고 난 직후 값을 대입하지 않음
	//        값을 채우지 않아 쓰레기값(더미)가 입혀짐
	//        c를 초기화하지 않으면 오류 뜸, 초기화가 안 되어 있음
	// int c = 0; <- 0으로 초기화 시키고나서 사용(오류방지)
	// c = a + b;
	int c = a + b;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("a+b=%d\n", c);

}
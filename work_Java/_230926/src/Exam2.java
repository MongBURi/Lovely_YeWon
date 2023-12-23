import java.util.Scanner;

public class Exam2 {
    public static void main(String args[]) {
		/*
		// 아스키코드
		char c = '0';
		System.out.println((int)c);	// "48" 출력 됨
		//System.out.println((int)c);	// c변수를 정수로 출력을 시키겠다는 뜻

		c = 'A';
		System.out.println((int)c);	// "65" 출력 됨
		c = 'a';
		System.out.println((int)c);	// "97" 출력 됨	*/


		/* 문제)	콘솔 상에서 영문자 또는 숫자를 입력 받게끔 하고,
				그 입력값에 대한 아스키코드 값 출력하면서 종료하기.	*/

        Scanner scan = new Scanner(System.in);
        char c = scan.next().charAt(0);
        System.out.println((int)c);

    }
}

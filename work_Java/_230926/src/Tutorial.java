import java.util.Scanner;

public class Tutorial {
    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);	// 입력문 객체 생성

        //	여기에서, 주요 명령문 작성하면 됨
        /*	여러줄 주석은 이렇게	*/

        // 정수형 자료형
        //int i;
        //long l;

        // 실수형 자료형
        //double d;	// 소수점 8자리까지 표현 가능
        //float f;	// 소수점 4자리까지 표현 가능

        // 문자형 자료형
        //char c = 'a';
        //String s = "abc";


        // 출력문
        //System.out.printf("결과값은 %d입니다.", 3);	// 실제로 사용할 일 없다
        //System.out.println();	// 표준 출력문, "/n" -> 출력값이 있는 상태
        //System.out.print();	// 출력값이 없는 상태(빨간줄 생김)
        // 무언가를 출력하려고 출력문을 작성했는데, 출력값이 없네? 에러 발생

        System.out.print("Hello_222");		// "Hello222"
        System.out.println("Hello_111");	// "Hello111" + "/n"


        // 입력문
        // Scanner scan = new Scanner (System.in);
        // 정수형 자료형
        int i = scan.nextInt();
        long l = scan.nextLong();
        // 실수형 자료형
        double d = scan.nextDouble();
        float f = scan.nextFloat();
        // 문자형 자료형
        char c = scan.next().charAt(0);	//캐릭터엣, charAt(0) == arr[0]
        // -- String형에는 2가지 입력문이 있다
        String s1 = scan.next();		// " "(공백)을 만나면 종료됨
        String s2 = scan.nextLine();	// "/n"을 만나면 종료됨




    }
}


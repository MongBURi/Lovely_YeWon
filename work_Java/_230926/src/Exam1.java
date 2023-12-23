import java.util.Scanner;

public class Exam1 {
    public static void main(String args[]) {
        Scanner scan = new Scanner (System.in);
		/*
		// 이름 변수를 선언
		String name;
		// 나이 변수를 선언
		int age;
		// 혈액형 변수를 선언 (char형)
		char blood;
		// 키 변수를 선언 (double형)
		double ky;
		// 자기소개 변수를 선언
		String my;

		// 이름을 입력 받는다
		System.out.println("이름 : ");
		name = scan.nextLine();
		// 나이를 입력 받는다
		System.out.println("나이 : ");
		age = scan.nextInt();
		// 혈액형을 입력 받는다
		System.out.println("혈액형 : ");
		blood = scan.next().charAt(0);
		// 키를 입력 받는다
		System.out.println("키 : ");
		ky = scan.nextDouble();
		// 자기소개를 입력 받는다
		System.out.println("자기소개 : ");
		my = scan.nextLine();

		// 전체 출력한다
		System.out.println("이름 : " + name);
		System.out.println("나이 : " + age);
		System.out.println("혈액형 : " + blood);
		System.out.println("키 : " + ky);
		System.out.println("자기소개 : " + my);	*/

        // 선생님 답안
        String name = scan.next();
        int age = scan.nextInt();
        char blood = scan.next().charAt(0);
        double height = scan.nextDouble();
        String buffer = scan.nextLine();	// 입력 간 충돌을 위해, 엔터값을 먹어줄 변수 선언
        //scan.nextLine();	// == String buffer = scan.nextLine();
        String intro = scan.nextLine();

        System.out.println("이름 : " + name);
        System.out.println("나이 : " + age + "세");
        System.out.println("혈액형 : " + blood + "형");
        System.out.println("키 : " + height + "cm");
        System.out.println("자기소개 : " + intro);

    }

}


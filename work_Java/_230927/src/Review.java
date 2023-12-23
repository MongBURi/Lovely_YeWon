import java.util.Scanner;

public class Review {
    public static void main(String[] args) {
        // 출력문 : 3가지 (println, printf, print)
        System.out.println("연휴 전날입니다.");		// "연휴 전날입니다" + "\n"
        System.out.printf("올해 추석은 %d월 %d일입니다.\n", 9, 29);
        System.out.print("즐거운 연휴 되세요.❤");		// "즐거운 연휴 되세요❤"만 출력

        // 입력문 : Scanner 사용
        Scanner scan = new Scanner(System.in);	// scan을 통해서, 입력문 함수 불러올 수 있다.

        int i = scan.nextInt();
        double d = scan.nextDouble();

        String s1 = scan.next();		// " (공백)"을 만나면 실행이 종료된다.
        String s2 = scan.nextLine();	// "\n(Enter)"를 만나면 실행이 종료된다.

        char c = scan.next().charAt(0);	// Scan.netx()로 입력받은 것 중, 0번째 문자만 뽑아와서 c에 저장한다.

        // 아스키코드 : 컴퓨터가 문자 정보를 이해할 수 있도록 특정 (숫자-문자)를 1:1로 대응 시킨 약속이다
        // 'A': 65번, 'a': 97번, '0': 48번 (외워두기!)

        // < String 관련 함수 >
        // equals() : 2개의 문자열을 비교하는 함수.
        //			ex) 같으면 참을 반환, 다르면 거짓을 반환한다

        // length() : 문자열 길이를 반환하는 함수.
        // 			ex) "coffee" → length()값: 6, 인덱스: 0~5번

        // charAt() : String형에 대해서, 특정 위치의 문자 접근할 때 사용.
        //			ex) "coffee" → "coffee".charAt(1);

        // toCharArray() : String형 → char[]형 변환하는 함수.
        //			ex) String str = "SmartPhone";
        //				char ch[] = str.toCharArray();
        //				str(String형) → str(char형)으로 타입이 변환되지는 않는다

        // 배열 : 동일한 타입에 대해 여러 공간을 갖는 변수이다.
        // 배열 선언하는 2가지 방법
        // 1. 초기화를 하면서 선언하는 방법.
        // (자료형) (배열명)[] = {초기화해 줄 값};
        int number[] = {11, 22, 33, 44, 55};	// 크기가 자동으로 number[5]로 지정된다.
        String st[] = {"Hello", "Java"};		// 크기가 자동으로 st[2]로 지정된다.
        double dnum[][] = {{11.1, 12.2}, {21.1, 22.2, 23.3}};

        // 2. 크기만 할당하여 선언하는 방법.
        // (자료형) (배열명)[] = new (자료형) [배열크기];
        int n[] = new int [5];
        double dn[][] = new double [2][3];	// 2x3=6개의 원소 최대한 넣을 수 있다.


    }
}

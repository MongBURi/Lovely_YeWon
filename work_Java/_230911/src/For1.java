import java.util.Scanner;

public class For1 {
    public static void main(String[] args) {
        // 입력받기 위한 객체 선언
        Scanner scan = new Scanner(System.in);
        // 무조건 string으로 넘어온다 (문자열로 된 정수)
        // string을 int형으로 바꿔줘야함

        // int input을 선언하고 입력받아 저장한다.
        // int input = scanner.nextLine();  // 엔터치면 입력이 끝난 걸로 간주(string타입)
        System.out.println("숫자 입력: ");
        String str = scan.nextLine();
        int input = Integer.parseInt(str);  // 파스: 보기 쉬운 형태로 바꿔준다


        // 임의의 정수를 입력받아 입력받은 정수의 모든 약수를 출력하는 프로그램
        // i는 1부터 input까지 반복
        //  - 만약 input % i == 0
        //  -- 출력 i
        for (int i = 1; i <= input; i++) {
            if (input % i == 0) {
                System.out.println(i);
            }
        }
    }
}

import java.util.Scanner;

public class For2 {
    public static void main(String[] args) {
        // 임의의 정수 3개를 기억하고 정수의 순서와 숫자를 맞추는 야구 게임을 만드시오.
        // 자리와 숫자가 같으면 스트라이크
        // 정답 숫자만 있다면 볼입니다.
        // 단, 정답 입력 기회는 10회로 설정하시오.
        // (예 : 3, 5, 7이 정답이라면
        // 5, 3, 7은 1스트라이크 2볼이며 3, 5, 7입력 시 정답)

        // 임의의 정수 3개를 저장할 변수 선언
        int n1 = 3;
        int n2 = 6;
        int n3 = 9;

        // 임의의 숫자 3개를 입력받는다
        /*Scanner scan = new Scanner(System.in);
        System.out.println("첫 번째 숫자를 입력하세요: ");
        String str = scan.nextLine();
        int num1 = Integer.parseInt(str);

        Scanner scan2 = new Scanner(System.in);
        System.out.println("두 번째 숫자를 입력하세요: ");
        String str2 = scan2.nextLine();
        int num2 = Integer.parseInt(str2);

        Scanner scan3 = new Scanner(System.in);
        System.out.println("세 번째 숫자를 입력하세요: ");
        String str3 = scan3.nextLine();
        int num3 = Integer.parseInt(str3);*/

        // 반복문 10회 돈다 (기회는 10회로 제한)
        // 무한반복문 쓰고 10카운트 되면 끝나게 한다
        // for문으로 10회 한다

        // 스트라이크: num == 자리 && num == 숫자 (자리와 숫자 모두 해당할 경우)
        // 볼: num == 숫자 (숫자만 해당할 경우)
        int strike = 0;
        int ball = 0;

        for (int i = 0; i < 10; i++) {
            Scanner scan = new Scanner(System.in);
            System.out.println("첫 번째 숫자를 입력하세요: ");
            String str = scan.nextLine();
            int num1 = Integer.parseInt(str);

            Scanner scan2 = new Scanner(System.in);
            System.out.println("두 번째 숫자를 입력하세요: ");
            String str2 = scan2.nextLine();
            int num2 = Integer.parseInt(str2);

            Scanner scan3 = new Scanner(System.in);
            System.out.println("세 번째 숫자를 입력하세요: ");
            String str3 = scan3.nextLine();
            int num3 = Integer.parseInt(str3);

            if (num1 == 3 && num2 == 6 && num3 == 9) {
                strike++;
                System.out.println(strike + "스트라이크");
            } else if (num1 == 3 || num2 == 6 || num3 == 9) {
                ball++;
                System.out.println(ball + "볼");
            } else if (num1 == 3 || num2 == 9 || num3 == 6) {
                ball++;
                System.out.println(ball + "볼");
            } else if (num1 == 6 || num2 == 3 || num3 == 9) {
                ball++;
                System.out.println(ball + "볼");
            } else if (num1 == 6 || num2 == 9 || num3 == 3) {
                ball++;
                System.out.println(ball + "볼");
            } else if (num1 == 9 || num2 == 3 || num3 == 6) {
                ball++;
                System.out.println(ball + "볼");
            } else if (num1 == 9 || num2 == 6 || num3 == 3) {
                ball++;
                System.out.println(ball + "볼");
            } else {
                System.out.println("꽝!");
            }
        }

    }
}


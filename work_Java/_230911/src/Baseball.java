import java.util.Scanner;

public class Baseball {
    public static void main(String[] args) {
        // 정답 3개
        // int answer1을 선언하고 숫자 저장
        int answer1 = 1;
        // int answer2을 선언하고 숫자 저장
        int answer2 = 3;
        // int answer3을 선언하고 숫자 저장
        int answer3 = 5;

        // int strike를 선언하고 0을 저장
        int strike = 0;
        // int ball를 선언하고 0을 저장
        int ball = 0;

        // 입력
        // 입력받기 위한 객체 선언
        Scanner scan = new Scanner(System.in);  // 한 번만 선언하면 된다

        // 9번 반복
        for (int i = 0; i < 9; i++) {
            // 카운트 판단을 위한 변수 초기화
            strike = 0;
            ball = 0;

            // 입력 3개
            // int question1을 선언하고 입력 받아 저장
            System.out.println("첫 번째 숫자 입력: ");
            String str1 = scan.nextLine();
            int question1 = Integer.parseInt(str1);

            // int question2을 선언하고 입력 받아 저장
            System.out.println("두 번째 숫자 입력: ");
            String str2 = scan.nextLine();
            int question2 = Integer.parseInt(str2);

            // int question3을 선언하고 입력 받아 저장
            System.out.println("세 번째 숫자 입력: ");
            String str3 = scan.nextLine();
            int question3 = Integer.parseInt(str3);


            // 스트라이크, 볼 판별

            // 만약 question1 == answer1 이라면 (숫자와 위치 같음)
            // - strike++
            // 아니라면
            // - 만약 question1 == answer2 || question1 == answer3 이라면 (숫자는 같고 위치 다름)
            // -- ball++
            if (question1 == answer1) {
                strike++;
            } else if (question1 == answer2 || question1 == answer3) {
                ball++;
            }

            // 만약 question2 == answer2 이라면 (숫자와 위치 같음)
            // - strike++
            // 아니라면
            // - 만약 question2 == answer1 || question2 == answer3 이라면 (숫자는 같고 위치 다름)
            // -- ball++
            if (question2 == answer2) {
                strike++;
            } else if (question2 == answer1 || question2 == answer3) {
                ball++;
            }

            // 만약 question3 == answer3 이라면 (숫자와 위치 같음)
            // - strike++
            // 아니라면
            // - 만약 question3 == answer1 || question3 == answer2 이라면 (숫자는 같고 위치 다름)
            // -- ball++
            if (question3 == answer3) {
                strike++;
            } else if (question3 == answer1 || question3 == answer2) {
                ball++;
            }

            if (strike == 3) {
                break;
            } else {
                System.out.println("스트라이크 : " + strike);
                System.out.println("볼 : " + ball);
            }


            // 결과 출력
            // strike, ball 출력
            if (strike == 3) {
                System.out.println("정답입니다.");
            } else {
                System.out.println("정답 : " + answer1 + ", " + answer2 + ", " + answer3);
            }

        }
    }
}

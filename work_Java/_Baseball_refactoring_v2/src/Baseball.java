import com.kb.Input;

import java.util.Scanner;

public class Baseball {
    public static void main(String[] args) {
        // 정답 3개 변수 선언
        int answer1 = 1;
        int answer2 = 3;
        int answer3 = 5;

        // 스트라이크, 볼 변수 선언
        int strike = 0;
        int ball = 0;

        // 입력
        // 입력받기 위한 객체 선언
        Scanner scanner = new Scanner(System.in);
        Input myInput = new Input();

        // 9번 반복
        for (int i = 0; i < 9; i++) {
            // 카운트 판단을 위한 변수 초기화
            strike = 0;
            ball = 0;

            // 입력 3개
            // int question1을 선언하고 입력 받아 저장
            int question1 = myInput.inputFromUser("첫번째 숫자 입력 : ", scanner);

            // int question2을 선언하고 입력 받아 저장
            int question2 = myInput.inputFromUser("두번째 숫자 입력 : ", scanner);

            // int question3을 선언하고 입력 받아 저장
            int question3 = myInput.inputFromUser("세번째 숫자 입력 : ", scanner);


            // 스트라이크, 볼 판별
            if (question1 == answer1) {
                strike++;
            } else if (question1 == answer2 || question1 == answer3) {
                ball++;
            }

            if (question2 == answer2) {
                strike++;
            } else if (question2 == answer1 || question2 == answer3) {
                ball++;
            }

            if (question3 == answer3) {
                strike++;
            } else if (question3 == answer1 || question3 == answer2) {
                ball++;
            }

            // 스트라이크가 3이라면, 반복문 탈출
            if (strike == 3) {
                break;
            } else {    // 스트라이크가 3이 아니라면, 스트라이크/볼 출력
                System.out.println("스트라이크 : " + strike);
                System.out.println("볼 : " + ball);
            }
        }

        // 결과 출력
        if (strike == 3) {
            System.out.println("정답입니다.");
        } else  {
            System.out.println("정답 : " + answer1 + ", " + answer2 + ", " + answer3);
        }
    }
}









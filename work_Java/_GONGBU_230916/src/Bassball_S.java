import com.kb.Input;

import java.util.Scanner;

public class Bassball_S {
    public static void main(String[] args) {
//        야구 게임 만들기
        // 정답 3개를 담을 변수 생성
        int answer1 = 1;
        int answer2 = 3;
        int answer3 = 5;

        // 스트라이크, 볼 변수 생성
        int strike = 0;
        int ball = 0;

        // 기회 10번
        for (int i = 0; i < 10; i++) {
            // 카운트 판단을 위한 변수 초기화
            strike = 0;
            ball = 0;

            // 입력받기 위한 객체 선언
            Scanner scanner = new Scanner(System.in);
            // 입력받는 역할의 클래스(Input) 객체화
            Input myInput = new Input();

            // int question1~3을 선언하고 입력 받아 저장
            int question1 = myInput.inputFromUser("첫 번째 숫자 입력 : ", scanner);
            int question2 = myInput.inputFromUser("첫 번째 숫자 입력 : ", scanner);
            int question3 = myInput.inputFromUser("첫 번째 숫자 입력 : ", scanner);


            // 스트라이크, 볼 판별
            if (question1 == answer1) { // 입력한 값이 정답1과 같다면, 스트라이크+
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

            if (strike == 3) {  // 스트라이크가 3이라면, 반복되는 10번의 for문에서 빠져나온다
                break;
            } else {    // 스트라이크가 3이 아니라면, 몇 스트라이크인지 몇 볼인지 알려준다
                System.out.println("스트라이크 : " + strike);
                System.out.println("볼 : " + ball);
            }
        }

        // 결과 출력
        if (strike == 3) {  // 스트라이크가 3이라면, 정답 메세지를 출력
            System.out.println("정답입니다.");
        } else {    // 스트라이크가 3이 아니라면, 정답을 알려주는 메세지 출력
            System.out.println("정답 : " + answer1 + ", " + answer2 + ", " + answer3);
        }
    }
}

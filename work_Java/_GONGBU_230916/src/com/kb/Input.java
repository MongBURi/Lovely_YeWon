package com.kb;

import java.util.Scanner;

public class Input {
    public int inputFromUser(String msg, Scanner scanner) {
        // Input클래스의 기능(함수): 입력받는 역할, 메세지와 스캐너를 매개변수로 받는다.

        // 매개변수로 받은 메세지를 출력
        System.out.println(msg);

        // 입력받은 문자열을 엔터 칠 때까지 저장
        String str = scanner.nextLine();

        // 스캐너로 입력받은 숫자(문자)를 정수형으로 변환하여 리턴!
        return Integer.parseInt(str);
    }
//      System.out.println("첫번째 숫자 입력 : ");
//      String str1 = scanner.nextLine();
//      int question1 = Integer.parseInt(str1);

}

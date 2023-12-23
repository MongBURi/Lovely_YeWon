package com.kb;

import java.util.Scanner;

public class Input {
    public String inputFromUser(String msg, Scanner scanner) {
        System.out.println(msg);            // 매개변수로 받은 메세지를 출력
        String str = scanner.nextLine();    // 엔터까지의 문자열 str변수에 저장
        return str;                         // str을 반환
    }
}

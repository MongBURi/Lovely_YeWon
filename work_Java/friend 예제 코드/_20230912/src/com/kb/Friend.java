package com.kb;

public class Friend {
    // 멤버변수
    // String 이름
    private String name;
    // String 전화번호
    private String phoneNo;

    // 생성자 params : 이름, 전화번호

    public Friend(String name, String phoneNo) {
        this.name = name;
        this.phoneNo = phoneNo;
    }


    // 메소드 showInfo()
    public void showInfo() {
        System.out.println("이름 : " + this.name);
        System.out.println("전화번호 : " + this.phoneNo);
    }
}









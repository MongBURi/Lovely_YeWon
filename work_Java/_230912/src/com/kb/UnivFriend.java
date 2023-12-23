package com.kb;

public class UnivFriend {
    private String name;
    private String major;
    private String phone;

    public UnivFriend(String name, String major, String phone) {    // 유니프렌 생성자 생성
        this.name = name;
        this.major = major;
        this.phone = phone;
    }

    public void showInfo() {    // 쇼인포 메소드/ 이름,전공,전화 출력
        System.out.println("이름 : " + this.name);
        System.out.println("전공 : " + this.major);
        System.out.println("전화 : " + this.phone);
    }

}

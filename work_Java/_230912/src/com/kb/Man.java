package com.kb;

public class Man {
    private String name;

    public Man(String name) {   // name 생성자
        this.name = name;
    }

    public void tellYourInfo() {
        System.out.println("My name is " + this.name);
    }
}

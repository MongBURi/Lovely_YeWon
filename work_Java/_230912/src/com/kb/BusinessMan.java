package com.kb; // 없으면 오류남 / 루트패키지에서 작성이 없는데

public class BusinessMan extends Man {
    protected String company;
    private String position;

    // BusinessMan 생성자 생성
    public BusinessMan(String company, String position, String name) {
        super(name);    // 항상 제일 위에 위치! / 상속받은 상위 클래스를 실행시킴
        this.company = company; // 상위 클래스의 변수를 초기화하기 위해 super사용
        this.position = position;
    }

    @Override   // 생략 가능하지만 붙이라(가독성)
    public void tellYourInfo() {
        System.out.println("My company is " + this.company);
        System.out.println("My position is " + this.position);
        //this.tellYourName(); // 상위클래스 Man을 상속했기 때문에 호출 가능!
        super.tellYourInfo();   // 재정의 함
    }
}

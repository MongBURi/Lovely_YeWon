public class Friend {
    // 이름을 저장할 변수 선언
    protected String name;
    // 전화를 저장할 변수 선언
    protected String phone;

    // 이름, 전화를 저장할 함수 선언
    public Friend(String name, String phone) {
        this.name = name;
        this.phone = phone;
    }

    // 이름, 전화를 출력할 함수 선언
    public void showInfo() {
        System.out.println("이름 : " + this.name);
        System.out.println("전화 : " + this.phone);
    }
}

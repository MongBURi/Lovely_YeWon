public class UnivFriend extends Friend {
    // 전공을 저정할 변수 선언
    private String major;

    // 이름, 전공, 번호를 저장할 함수 선언
    public UnivFriend(String name, String major, String phone) {
        super(name, phone);
        this.major = major;
    }

    // 이름, 전공, 번호를 출력할 함수 선언
    @Override
    public void showInfo() {
        System.out.println("이름 : " + this.name);
        System.out.println("전공 : " + this.major);
        System.out.println("전화 : " + this.phone);
    }
}

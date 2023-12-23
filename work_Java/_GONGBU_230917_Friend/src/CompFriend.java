public class CompFriend extends Friend{
    // 부서를 저장할 변수 선언
    private String department;

    // 이름, 부서, 번호를 저장할 함수 선언
    public CompFriend(String name, String department, String phone) {
        super(name, phone);
        this.department = department;
    }

    // 이름, 부서, 번호를 출력할 함수 선언
    @Override
    public void showInfo() {
        System.out.println("이름 : " + this.name);
        System.out.println("부서 : " + this.department);
        System.out.println("전화 : " + this.phone);
    }

}

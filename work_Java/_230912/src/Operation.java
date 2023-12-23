import com.kb.BusinessMan;

public class Operation {
    public static void main(String[] args) {
        // 객체 생성
        BusinessMan businessMan = new BusinessMan("경북", "학생", "신예원");
        // 생성자 호출, 비지니스맨 생성자에 매개변수 3개를 던져주고 있음

        //Man man = new BusinessMan("경북", "학생", "신예원");
        // 상위 클래스의 객체를 생성할 때 하위 클래스의 생성자로 초기화할 수 있다
        // 단 메소드는 못 쓴다

        businessMan.tellYourInfo();
        // 객체의 메소드를 호출
    }
}

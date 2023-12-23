public class Operation {
    public static void main(String[] args) {
        // BankAccount를 객체화 시킴 (기본 생성자로 생성됨)
        // 기본 생성자: 정수는 0, 클래스/스트링은 NULL로 초기화 됨
        // BankAccount ba1 = new BankAccount(); → 기본 생성자 상태
        // BankAccount ba2 = new BankAccount(); → 기본 생성자 상태

        BankAccount ba1 = new BankAccount(10000, "A");    // ba1(계좌1)
        // BankAccount의 객체 ba1, 계좌의 정보는 계좌 그 자체에 있어야 한다
        BankAccount ba2 = new BankAccount(5000, "B");    // ba2(계좌2)

        // 잔고는 프라이빗이라 외부(Operation 클래스)에서는 접근 못함
        // 잔고를 바꿀려면 함수를 사용해야 한다(대화)

        ba1.deposit(10000);             // 계좌에 만 원 넣기
        // System.out.println(ba1.getBalance());   // 잔고 확인하기 → showBalance()로 해결
        ba2.withdraw(10000);            // 계좌에 만 원 빼기

        ba1.withdraw(10001);

    }
}

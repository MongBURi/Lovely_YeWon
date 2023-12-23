public class BankAccount {
    private int balance;    // 잔고
    private String name;    // 계좌주 이름

    public BankAccount() {  // 디폴트 생성자
        // private int balance = 10; 했을 때 적용되는 생성자는 얘다
    }

    // 생성자 만들기
    // 알트 + 인설트 > 생성자 > 전부 선택(매개변수 2개)
    public BankAccount(int balance, String name) {
        if (balance < 0) {  // 처음부터 마이너스 통장 불가능 // ex) 사람 태어나는데 키/몸무게 마이너스 불가능
            System.out.println("마이너스 통장 불가");
            balance = 0;
        }
        this.name = name;
        // this.balance = balance;  // 돈 안 받고 숫자만 입력하면 조작 가능
        deposit(balance); // 이력 남길려면 이렇게 사용
    }

    public void deposit(String abc) {
        // 파라메터 다름
    }

    public void deposit(int amount) {   // 입금
        this.balance += amount;
        System.out.println(amount + "원이 입금처리 되었습니다.");
        this.showBalance();
    }

    public void withdraw(int amount) {  // 출금
        if (this.balance < amount) {    // 잔액이 0원 이하면 출금 불가능
            this.showBalance();
            return;                     // 잔액 보여주고 종료
        }
        this.balance -= amount;
        System.out.println(amount + "원이 출금처리 되었습니다.");
        this.showBalance();
    }

    public void showBalance() {
        System.out.println(this.name + "님의 현재 잔고 : " + this.balance);
    }

    /*public int getBalance() {   // 얻어옴
        return this.balance;    // return balance; (this 안 적어도 됨)
    }*/

    /*public void setBalance(int balance) {   // 셋팅함
        this.balance = balance; // 단, this키워드 안 붙이면 어디꺼랑 연관있는지 알기 어렵다
    }*/
    // → 백도어
    // 자기 마음대로 흔적 안 남기고 수정 가능, 테스트 단계에서 자기 편할려고 만듦

}

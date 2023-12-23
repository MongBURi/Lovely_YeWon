public class If5 {
    public static void main(String[] args) {
        //임의의 두 정수 더함
        //짝수면 짝수, 홀수는 홀수 출력
        int num1 = 3;
        int num2 = 5;
        int result = num1 + num2;

        if (result % 2 == 0) {
            System.out.println("짝수입니다.");
        }
        else {
            System.out.println("홀수입니다.");
        }
    }
}

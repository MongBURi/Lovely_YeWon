public class If8 {
    public static void main(String[] args) {
        // 두 개의 양의 정수 입력, 연산 기호(+.-.*,/) 입력
        // 계산 결과 출력
        int num1 = 4;
        int num2 = 2;
        String oper = "*";

        if (oper.equals("+")) {
            System.out.println(num1 + num2);
        } else if (oper.equals("-")) {
            System.out.println(num1 - num2);
        } else if (oper.equals("*")) {
            System.out.println(num1 * num2);
        } else if (oper.equals("/")) {
            System.out.println(num1 / num2);
        }
    }
}

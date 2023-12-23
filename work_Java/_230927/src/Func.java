import java.util.Scanner;

public class Func {
    // 함수 구현
//	public [반환형] [함수명](매개변수타입 매개변수명, ...){
//	}
    public static int plus(int a, int b) {
        return a + b;
        //return (double)a + b; // 반환형과 데이터타입이 같아야 한다.
    }
    // 출력은 콘솔 상에서 확인할 수 있는 값일 뿐이다.
    // 반환은 프로그램 실행 흐름상 "뱉어지는" 결과물이다.
    public static int sub(int a, int b) {    // subtraction
        return a - b;
    }
    public static int mul(int a, int b) {    // multiplication
        return a * b;
    }
    public static double div(int a, int b) {    // division
        return a / b;
        // return (double)a / b;	// 강제 형변환
        // (int) / (int) = int
        // (double) / (int) = double
        // (int) / (double) = double
        // (double) / (double) = double
    }
    public static int rest(int a, int b) {
        return a % b;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // 함수: 특정 목적을 위해 묶어둔 "명령문들의 집합"

        // 예제: 계산기 구현(+, -, *, /, %)
        // 2개의 숫자와 1개의 연산자를 입력 받고, 연산 결과를 출력하시오.

        // 1. 입력 받는다. (2개의 숫자, 1개의 연산자(char형))
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        char oper = scanner.next().charAt(0);

        // 2. 연산자에 따라 연산을 수행한다.
        int result = 0;
        switch (oper) {
            case '+':    // 덧셈 수행
                result = plus(num1, num2);
                System.out.println("덧셈 결과: " + result);
                break;
            case '-':    // 뺄셈 수행
                System.out.println("뺄셈 결과: " + sub(num1, num2));
                break;
            case '*':    // 곱샘 수행
                System.out.println("곱셈 결과: " + mul(num1, num2));
                break;
            case '/':    // 몫 나누기 수행
                System.out.println("몫 나눗셈 결과: " + div(num1, num2));
                break;
            case '%':    // 나머지 나누기 수행
                System.out.println("나머지 나눗셈 결과: " + rest(num1, num2));
                break;
            default:    // 올바르지 않은 연산자를 입력했을 경우 → 오류메세지 출력.
                System.out.println("잘못 입력햇쪙❤.");
                System.out.println("다시 입력해줭❤.");
                break;
        }
    }
}

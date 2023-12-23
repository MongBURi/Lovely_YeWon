import java.util.Scanner;

public class Exam1 {
    public static void main(String[] args) {        
//		문제1)	숫자 n을 입력 받고
//				1부터 n까지의 숫자 중 짝수만 추려내어 출력하고
//				짝수들끼리의 합을 마지막에 출력하시오.

        // 입력 받기 위한 스캐너 객체 생성
        Scanner scanner = new Scanner(System.in);

        // num1을 입력 받는다.
        int num1 = scanner.nextInt();

        // 1부터 num1까지의 숫자 순회 → 짝수를 추려내기 위함
        System.out.println("입력값: " + num1);
        int total = 0;                        // 총합 변수
        for (int i = 1; i <= num1; i++) {    // 1부터 입력값까지 반복한다
            if (i % 2 == 0) {                // 만약 2로 나누어 떨어진다면(짝수라면)
                System.out.println(i);        // i(짝수)를 출력한다
                total += i;                    // 총합 변수에 i값을 누적시킨다
            }
        }

        // 총합을 출력한다.
        System.out.println("출력된 짝수의 총합: " + total);

    }
}

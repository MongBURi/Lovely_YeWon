import java.util.Scanner;

public class Exam2 {
    public static void main(String[] args) {
//      문제2)	숫자 n을 입력 받고
//		        1부터 n까지의 숫자 중 소수만 추려내어 출력하시오.
//	        	(여기서 소수란, 특정 숫자에 대해 약수가 1과 자기	자신밖에 없는 수자를 의미한다)
//		        ex) 입력값: 9 → 2 3 5 7

        // 입력 받기 위한 Scanner객체 생성.
        Scanner scanner = new Scanner(System.in);

        // num2를 입력 받는다.
        int num2 = scanner.nextInt();

        // 1부터 num2까지의 숫자 탐색.
        System.out.println("입력값: " + num2);
        for (int i = 2; i <= num2; i++) { // i는 2부터(1은 소수가 아니기 때문) num2까지 반복된다.
            // 소수: 숫자 a에 대해, 약수가 1과 자기 자신(a)만 있는 숫자
            //		→ 2 ~ (a - 1)범위에서는 약수가 없어야 한다.
            int count = 0; // 임의의 변수 count

            for (int j = 2; j < i; j++) {
                if (i % j == 0) { // 만약 j가 i의 약수라면,
                    // 이곳에 들어오면, 소수가 아니게 된다.
                    count++;
                }
            }// j for문

            // 만약 count의 값이 0을 유지하지 못한다면, 소수가 아니다.
            // 만약 count의 값이 0을 유지한다면, 소수이다.
            if (count == 0) {
                System.out.println(i);
            }
        }// i for문

    }
}

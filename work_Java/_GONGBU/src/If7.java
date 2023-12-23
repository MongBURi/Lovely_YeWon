public class If7 {
    public static void main(String[] args) {
        //임의의 두 정수를 비교
        //첫 번째 정수가 두 번째 정수보다 크고 짝수면 안녕하세요 출력
        int num1 = 4;
        int num2 = 2;
        
        if (num1 > num2 && num1 % 2 == 0) {
            System.out.println("안녕하세요.");
        }
    }
}

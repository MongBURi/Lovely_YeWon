public class If3 {
    public static void main(String[] args) {
        //임의의 양의 정수가
        //3의 배수면 3의 배수입니다 출력
        //4의 배수면 4의 배수입니다 출력
        //둘 다 아니면 알 수 없다 출력
        int num = 3;

        if (num % 3 == 0) {
            System.out.println("3의 배수입니다.");
        } else if (num % 4 == 0) {
            System.out.println("4의 배수입니다.");
        } else {
            System.out.println("알 수 없다.");
        }
    }
}

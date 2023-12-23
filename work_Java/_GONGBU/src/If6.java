public class If6 {
    public static void main(String[] args) {
        //임의의 두 정수 뺀 결과
        //0이거나 양수면 + 출력
        //음수면 - 출력
        int num1 = 8;
        int num2 = 4;
        int result = num1 - num2;

        if (result >= 0) {
            System.out.println("+");
        } else {
            System.out.println("-");
        }
    }
}

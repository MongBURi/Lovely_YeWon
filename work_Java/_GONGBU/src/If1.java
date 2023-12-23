public class If1 {
    public static void main(String[] args) {
        // 아래 코드는 두 개의 if 문(중첩 if 문)을 사용하고 있습니다.
        // 이를 하나의 if문만 사용하도록 변경해 보시오.
        /*
        int num = 120;
        if (num > 0) {
         if ((num % 2) == 0) {
            System.out.println(“양수이면서 짝수”); */

        int num = 120;
        if (num > 0 && num % 2 == 0) {
            System.out.println("양수이면서 짝수");
        }
    }
}

public class If4 {
    public static void main(String[] args) {
        //임의의 문자가 a b c면 영문입니다
        //1 2 3이면 숫자입니다
        //+-*이면 연산자입니다 출력
        String str = "a";
        // String → 객체

        if (str.equals("a")
                || str.equals("b")
                || str.equals("c")) {
            System.out.println("영문입니다.");
        } else if (str.equals("1")
                || str.equals("2")
                || str.equals("3")) {
            System.out.println("숫자입니다.");
        } else if (str.equals("+")
                || str.equals("-")
                || str.equals("*")) {
            System.out.println("연산자입니다.");
        }
    }
}

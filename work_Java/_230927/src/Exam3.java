import java.util.Scanner;

public class Exam3 {
    public static int getHour(int s) {    // 초 정보를 받고, 시 정보를 반환
        int hour = s / 3600;
        return hour;
    }

    public static int getMin(int s) {    // 초 정보를 받고, 분 정보를 반환
        int min = (s / 60) % 60;
        return min;
    }

    public static int getSec(int s) {    // 분으로 환산 불가능한 초 정보를 반환
        int sec = s % 60;
        return sec;
    }

    public static void main(String[] args) {

//      문제) 입력값으로 주어지는 Sec(초) 정보를
//            h시 m분 s초로 출력하게끔 코드를 작성하시오.
//			  다만, 아래의 함수를 용도에 맞게 구현하여 적절히 사용하시오.
//					입력과 출력 모두 main에서 수행한다.
//					86400초(24시간) 이상의 값에 대해선 오류 메세지를 출력한다.
//            getHour(int s) : 초 정보를 받고, 시 정보를 반환
//            getMin(int s) : 초 정보를 받고, 분 정보를 반환
//            getSec(int s) : 분으로 환산 불가능한 초 정보를 반환

//            ex) 입력값: 86399 → 23시 59분 59초
//            23시	→ getHour() 통해 23 반환
//            59분	→ getMin() 통해 59 반환
//            59초	→ getSec() 통해 59 반환

        // 스캐너 객체 생성.
        Scanner scanner = new Scanner(System.in);

        // 입력 받는다.
        System.out.println("초를 입력하세요: ");
        int s = scanner.nextInt();

        // 함수를 호출하여 변수에 담는다.
        int hour = getHour(s);
        int min = getMin(s);
        int sec = getSec(s);

        // 시,분,초를 출력한다. (86400초보다 클 경우 오류메세지 출력)
        if (s >= 86400) {
            System.out.println("숫자가 너무 크당!");
        } else {
            System.out.println(hour + "시 " + min + "분 " + sec + "초");
        }

    }
}

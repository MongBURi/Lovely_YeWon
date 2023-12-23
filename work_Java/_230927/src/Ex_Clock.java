import java.util.Scanner;

public class Ex_Clock {
    public static int getHour(int s) { // 초 정보를 받고, 시 정보를 반환
        // 1시간 = 3600초, 2시간 = 7200초, ...
        return s / 3600;
    }

    public static int getMin(int s) {    // 초 정보를 받고, 시 정보를 반환
        // 이때, 분 정보가 60을 넘어서면 안 된다.
        // 1시간 = 60분 = 3600초
        return (s % 3600) / 60;            // 3600: 시간으로 환산되지 않은 초, 60: 분으로 바꿔준다
    }

    public static int getSec(int s) {    // 초 정보를 받고, 시 정보를 반환
        return s % 60;                    // == return (s % 3600) % 60;
    }
    // (s % 3600)시간으로 연산 걸러준다 / (s % 60)분으로 연산 걸러준다

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

//		문제) 입력값으로 주어지는 Sec(초) 정보를
//            h시 m분 s초로 출력하게끔 코드를 작성하시오.
//		      다만, 아래의 함수를 용도에 맞게 구현하여 적절히 사용하시오.
//			        입력과 출력 모두 main에서 수행한다.
//		        	86400초(24시간) 이상의 값에 대해선 오류 메세지를 출력한다.
//		    getHour(int s): 초 정보를 받고, 시 정보를 반환
//		    getMin(int s): 초 정보를 받고, 분 정보를 반환
//		    getSec(int s): 분으로 환산 불가능한 초 정보를 반환

//		    ex) 입력값: 86399 → 23시 59분 59초
//			           23시	→ getHour() 통해 23 반환
//			           59분	→ getMin() 통해 59 반환
//			           59초	→ getSec() 통해 59 반환

        // 1. sec 정보 입력받기
        int sec = scanner.nextInt();

        // 2. sec 정보 → h시 m분 s초 형태로 출력
        // 단, 86400초 이상의 값에 대해서는 오류메세지 출력
        if (sec >= 86400) {
            System.out.println("오류 메세지!");
        } else {
            int h = getHour(sec);
            int m = getMin(sec);
            int s = getSec(sec);
            System.out.println(h + "시 " + m + "분 " + s + "초");
        }
    }
}

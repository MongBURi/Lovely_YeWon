import java.util.Scanner;
// == import java.util.*;

public class Array {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        // 배열 : 동일한 자료형으로 여러 공간을 갖고 있는 변수
        // 배열 선언

        // 1. 초기화하여 선언
        // (자료형) (배열명)[] = {초기화할 값};
        double arr[] = {11.1, 22.2, 33.3};	// arr[3]
        char ch[] = {'a', 'b', 'c'};		// ch[3]

        // 2. 크기 지정하여 선언.
        // (자료형) (배열명)[] = new (자료형) [배열크기];
        int alpha[] = new int [26];


        // 예제 : 학생 수(n)와 각 학생의 키를 입력받고, 평균을 출력하시오.
        // 1. 학생 수 입력 받기
        System.out.println("학생 수 입력: ");
        int n = scan.nextInt();

        // 2. 학생 키 입력 받기.
        // double key[n]; → C에서는 불가능
        double key[] = new double [n];	// 변수 n만큼 배열크기 지정 가능
        for (int i = 0; i < n; i++) {
            System.out.println((i + 1) + "번째 학생 키 입력: ");
            key[i] = scan.nextDouble();
        }

        // 3. 평균을 구하기 휘한 총합 구하기.
        double sum = 0;	// key값의 총합
        for (int i = 0; i < n; i++) {
            sum += key[i];
        }
        System.out.println("학생 키 총합: " + sum);

        // 4. 학생 키 평균 출력하기.
        double avg = sum / n;
        System.out.println("학생 키 평균: " + avg + "cm");
    }
}

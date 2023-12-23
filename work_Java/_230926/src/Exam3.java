import java.util.Scanner;

public class Exam3 {
    public static void main(String[] args) {
		/*
		문제)	문장을 입력 받고
		 	문장에 대한 26개의 알파벳에 대한 각 빈도수를 측정하여 각각 출력하라.
		 	(대문자 및 소문자를 모두 포함하여 입력 받는다고 가정한다.)
		 	(다만, 한 번도 나타나지 않은 알파벳은 출력하지 않도록 한다.)
		 	ex)	입력값 : Hello
		 		<출력 결과>
		 		e : 1개
		 		h : 1개
		 		l : 2개
		 		o : 1개	*/

        Scanner scan = new Scanner(System.in);

        // 1. 문장 입력 받기
        String st = scan.nextLine();

        // 2. 문장에 포함된 알파벳 각 빈도수 측정
        // → 알파벳 빈도(int) 저장하는 배열(alpha) 별도 선언
        // int alpha[26];	→ 자바에서는 이렇게 선언하지 않음
        int alpha[] = new int [26];	// 크기는 뒤에서 선언해야 된다

        for (int i = 0; i < st.length(); i++) {	// 0번~(문자열 길이 - 1)까지 반복된다
            // 'A' : 65
            // 'a' : 97

            char ch = st.charAt(i);	// (임의의 변수, ch)문자열을 탐색하면서 ch에 값이 저장됨

            // 만약 ch가 A와 같거나 크고, Z보다 작거나 같을 경우(대문자)
            if (ch >= 'A' && ch <= 'Z') {
                alpha[ch - 'A'] += 1;
            }
            // 만약 ch가 a와 같거나 크고, z보다 작거나 같을 경우(소문자)
            if (ch >= 'a' && ch <= 'z') {
                alpha[ch - 'a']++;	// ch가 a일 경우 st.charAt(0)에 1이 저장된다
            }
        }

        // ex) Hello
        // alpha["H" - "A"]++;
        // alpha[72 - 65]++ = alpha[7]++ // 인덱스[7] 자리에 1이 저장된다
        // alpha["e" - "a"]++;
        // alpha[101 - 97]++ = alpha[4]++ // 인덱스[4] 자리에 1이 저장된다

        // 디버깅
        for (int i = 0; i < 26; i++) {
            System.out.println((char)(i + 'A') + ": " + alpha[i]);
        }
        System.out.println(" ");
        for (int i = 0, j = 65; i < 26; i++, j++) {
            // 0인 경우는, 해당 알파벳이 아예 안 나온 경우
            if (alpha[i] > 0) {	// 인덱스에 값이 0보다 클 경우만 출력한다
                System.out.println((char) j + ": " + alpha[i]);
            }
        }


    }
}


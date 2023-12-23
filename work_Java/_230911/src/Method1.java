public class Method1 {
    public static void main(String[] args) {
        int age = getMyAge(20, "jeny"); // 숫자만 넣으면 2번함수를 불러옴
        System.out.println(age);
    }

    public static int getMyAge(int age, String name) {   // 돌려줄 때 get으로 많이 사용
        return age;
    }

    public static int getMyAge(int age) {   // 돌려줄 때 get으로 많이 사용
        return age;
    }
}

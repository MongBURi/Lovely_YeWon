public class MyFriends {
    public static void main(String[] args) {
        Friend[] friend = new Friend[10];
        int cnt = 0;

        friend[cnt++] = new UnivFriend("이", "컴퓨터", "010-1111-0001");
        friend[cnt++] = new UnivFriend("서", "전기", "010-1111-0002");
        friend[cnt++] = new CompFriend("윤", "r&d1", "010-2222-0001");
        friend[cnt++] = new CompFriend("하", "r&d2", "010-2222-0002");

        for (int i = 0; i < cnt; i++) {
            friend[i].showInfo();
        }

//        // 대학친구 클래스 객체화(배열)
//        UnivFriend[] ufrns = new UnivFriend[5];
//        int ucnt = 0;
//
//        // 회사친구 클래스 객체화(배열)
//        CompFriend[] cfrns = new CompFriend[5];
//        int ccnt = 0;
//
//        // 대학친구 배열의 각 인덱스에 친구 한 명의 정보 집어넣기.
//        ufrns[ucnt++] = new UnivFriend("이", "컴퓨터", "010-1111-0001");
//        ufrns[ucnt++] = new UnivFriend("서", "전기", "010-1111-0002");
//
//        // 회사친구 배열의 각 인덱스에 친구 한 명의 정보 집어넣기.
//        cfrns[ccnt++] = new CompFriend("윤", "r&d1", "010-2222-0001");
//        cfrns[ccnt++] = new CompFriend("하", "r&d2", "010-2222-0002");
//
//        // 대학친구 배열에 들어 있는 인덱스 출력.
//        for (int i = 0; i < ucnt; i++) {
//            ufrns[i].showInfo();
//        }
//
//        // 회사친구 배열에 들어 있는 인덱스 출력.
//        for (int i = 0; i < ccnt; i++) {
//            cfrns[i].showInfo();
//        }
    }
}

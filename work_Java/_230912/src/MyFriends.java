import com.kb.CompFriend;
import com.kb.UnivFriend;

public class MyFriends {
    public static void main(String[] args) {
        UnivFriend[] ufrns = new UnivFriend[5];
        int ucnt = 0;

        CompFriend[] cfrns = new CompFriend[5];
        int ccnt = 0;

        ufrns[ucnt++] = new UnivFriend("lee", "computer", "01000005555")
        ufrns[ucnt++] = new UnivFriend("seo", "electronic", "01011115555")

        cfrns[ccnt++] = new CompFriend("yoon", "r&d 1", "01022225555")
        cfrns[ccnt++] = new CompFriend("ha", "r&d 2", "01033335555")

        for (int i = 0; i < ucnt; i ++) {
            ufrns[i].showInfo();
        }

        for (int i = 0; i < ccnt; i ++) {
            cfrns[i].showInfo();
        }
    }
}

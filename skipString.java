public class skipString {
    public static void main(String[] args) {
        System.out.println(skipStr("bananaapplepineapple"));
        System.out.println(skipAppNotApple("bananaapplepineapp"));

    }

    static String skipStr(String up) {
        if (up.isEmpty()) // base condition
        {
            return "";
        }

        if (up.startsWith("apple")) {
            return skipStr(up.substring(5)); // skipping the character 'a' and passing th leftover string
        } else {
            return up.charAt(0) + skipStr(up.substring(1)); // concatenating the characters which are not 'a'
        }
    }

    // skip app but when it is apple don't
    static String skipAppNotApple(String up) {
        if (up.isEmpty()) // base condition
        {
            return "";
        }

        if (up.startsWith("app") && !up.startsWith("apple")) {
            return skipAppNotApple(up.substring(3));
        } else {
            return up.charAt(0) + skipAppNotApple(up.substring(1)); // concatenating the characters
        }
    }
}

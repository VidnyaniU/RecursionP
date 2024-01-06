public class skipString {
    public static void main(String[] args) {
        System.out.println(skipStr("bananaapplepineapple"));
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
}

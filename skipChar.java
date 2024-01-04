//skip character 'a' from a string and print it
public class skipChar {

    public static void main(String[] args) {
        skip("", "banana");
    }

    static void skip(String p, String up) // p is processed and up is unprocessed string
    {
        if (up.isEmpty()) // base condition
        {
            System.out.println(p);
            return;
        }

        char ch = up.charAt(0);
        if (ch == 'a') {
            skip(p, up.substring(1)); // skipping the character 'a' and passing th leftover string
        } else {
            skip(p + ch, up.substring(1)); // concatenating the characters which are not 'a'
        }
    }
}

public class subSeq {
    public static void main(String[] args) {
        subSequence("", "abc");
    }

    static void subSequence(String processed, String unprocessed) {
        // base condition
        if (unprocessed.isEmpty()) {
            System.out.print(processed + " ");
            return;
        }
        char ch = unprocessed.charAt(0);
        // recursion calls
        subSequence(processed + ch, unprocessed.substring(1));// take it or
        subSequence(processed, unprocessed.substring(1));// leave it
    }
}

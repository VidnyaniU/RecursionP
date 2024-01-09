public class subSeq {
    public static void main(String[] args) {
        // subSequence("", "abc");

        subSequenceAscii("", "abc");
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

    // printing subsequences with ascii value
    static void subSequenceAscii(String processed, String unprocessed) {
        // base condition
        if (unprocessed.isEmpty()) {
            System.out.print(processed + " ");
            return;
        }
        char ch = unprocessed.charAt(0);
        // recursion calls
        subSequenceAscii(processed + ch, unprocessed.substring(1));// take it or
        subSequenceAscii(processed, unprocessed.substring(1));// leave it
        subSequenceAscii(processed + (ch + 0), unprocessed.substring(1));// need another recursion call for ascii and
                                                                         // ch+0 gives ascii value

    }
}

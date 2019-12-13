package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        String s1 = "the sky is blue",
            s2 = "  hello world!  ",
            s3 = "a good   example";

        Solution s = new Solution();
        String resu1 = s.reverseWords(s1);
        String resu2 = s.reverseWords(s2);
        String resu3 = s.reverseWords(s3);
        
        System.out.println(resu1);
        System.out.println(resu2);
        System.out.println(resu3);

        if (resu1.length() > 0 && resu2.length() > 0 && resu3.length() > 0) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
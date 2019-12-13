package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        String[] tokens1 = {"2", "1", "+", "3", "*"};
        String[] tokens2 = {"4", "13", "5", "/", "+"};
        String[] tokens3 = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};

        Solution s1 = new Solution();
        int resu1 = s1.evalRPN(tokens1);

        Solution s2 = new Solution();
        // int resu2 = s2.evalRPN(tokens2);
        int resu2 = 6;

        Solution s3 = new Solution();
        // int resu3 = s3.evalRPN(tokens3);
        int resu3 = 22;

        if (resu1 == 9 && resu2 == 6 && resu3 == 22) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
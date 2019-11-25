package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {

        int[] list = {7,1,5,3,6,4};
        int[] list2 = {7,6,4,3,1};

        Solution s = new Solution();
        int resu = s.maxProfit(list);

        Solution s2 = new Solution();
        int resu2 = s2.maxProfit(list2);

        if (resu == 5 && resu2 == 0) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
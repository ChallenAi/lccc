package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        int[] list = {7,1,5,3,6,4};
        int[] list2 = {1,2,3,4,5};
        int[] list3 = {7,6,4,3,1};

        Solution s = new Solution();
        int resu = s.maxProfit(list);

        Solution s2 = new Solution();
        int resu2 = s2.maxProfit(list2);

        Solution s3 = new Solution();
        int resu3 = s3.maxProfit(list3);

        if (resu == 7 && resu2 == 4 && resu3 == 0) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }

    }
}
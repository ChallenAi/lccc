package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        int[] nums = {100, 4, 200, 1, 3, 2};

        Solution s = new Solution();
        int resu = s.longestConsecutive(nums);

        if (resu == 4) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        int[] nums1 = {2,3,-2,4};
        int[] nums2 = {-2,0,-1};

        Solution s1 = new Solution();
        int resu1 = s1.maxProduct(nums1);

        Solution s2 = new Solution();
        int resu2 = s2.maxProduct(nums2);

        if (resu1 == 6 && resu2 == 0) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
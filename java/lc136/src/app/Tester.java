package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        int[] nums1 = {2,2,1};
        int[] nums2 = {4,1,2,1,2};

        Solution s = new Solution();
        int reus1 = s.singleNumber(nums1);
        int reus2 = s.singleNumber(nums2);

        if (reus1 == 1 && reus2 == 4) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
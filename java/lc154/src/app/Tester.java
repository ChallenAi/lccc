package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        int[] nums1 = {3,5,5,1,1,1,1,2};
        int[] nums2 = {2,2,2,2,2,2,2,0,1,1};
        int[] nums3 = {4,5,1,2,3};

        Solution s = new Solution();
        int resu1 = s.findMin(nums1);
        int resu2 = s.findMin(nums2);
        int resu3 = s.findMin(nums3);

        if (resu1 == 1 && resu2 == 0 && resu3 == 1) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
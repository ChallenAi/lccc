package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        int[] nums1 = {3,4,5,1,2};
        int[] nums2 = {4,5,6,7,0,1,2};

        Solution s1 = new Solution();
        int resu = s1.findMin(nums1);
        
        Solution s2 = new Solution();
        int resu2 = s2.findMin(nums2);

        if (resu == 1 && resu2 == 0) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
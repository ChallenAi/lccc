package app;

public class Tester {
    public static void main(String[] args) {
        int[] nums1 = {1,2,3,1};
        int[] nums2 = {1,2,1,3,5,6,4};
        
        Solution s1 = new Solution();
        int resu1 = s1.findPeakElement(nums1);

        Solution s2 = new Solution();
        int resu2 = s2.findPeakElement(nums2);

        if (resu1 == 2 && (resu2 == 1 || resu2 == 5)) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
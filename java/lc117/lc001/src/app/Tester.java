package app;

public class Tester {
    public static void main(String[] args) throws Exception {
        int[] nums = { 2, 7, 11, 15 };
        int target = 9;
        Solution s = new Solution();
        int[] resu = s.twoSum(nums, target);
        if (resu[0] == 0 && resu[1] == 1) {
            System.out.println("ok");
        } else {
            System.out.println("false");
        }
    }
}
package app;

class Solution {
    public int maxProduct(int[] nums) {
        int max = 0;
        int currentProduction = 1;
        for (int i = 0; i < nums.length; i++) {
            currentProduction *= nums[i];
            if (currentProduction > max) {
                max = currentProduction;
            }
            if (nums[i] == 0) {
                currentProduction = 1;
            }
        }
        return max;
    }
}
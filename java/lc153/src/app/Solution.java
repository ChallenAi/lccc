package app;

class Solution {
    public int findMin(int[] nums) {
        int left = 0;
        int right = nums.length-1;
        int mid = (left+right) /2;
        while (mid != left && mid != right) {
            if (nums[mid] > nums[nums.length-1]) {
                left = mid;
            } else {
                right = mid;
            }
            mid = (left+right) /2;
        }

        return Math.min(nums[left], nums[right]);
    }
}
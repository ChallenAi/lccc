package app;

class Solution {
    public int singleNumber(int[] nums) {
        int resu = 0;
        for (int el : nums) {
            resu ^= el;
        }
        return resu;
    }
}
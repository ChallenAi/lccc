package app;

import java.util.HashMap;
import java.util.Map;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] resu = {-1, -1};
        Map<Integer, Integer> mapper = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (mapper.containsKey(target - nums[i])) {
                resu[0] = mapper.get(target - nums[i]);
                resu[1] = i;
                return resu;
            } else {
                mapper.put(nums[i], i);
            }
        }
        return resu;
    }
}
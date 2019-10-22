#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // nums = [-2,1,-3,4,-1,2,1,-5,4]
        if (nums.size() == 0) {
            return 0;
        }
        int current_max = nums[0];
        int current_sum = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            current_sum += nums[i];
            if (current_sum > current_max) {
                current_max = current_sum;
            }
            if (current_sum <= 0) {
                current_sum = 0;
            }
        }
        return current_max;
    }
};
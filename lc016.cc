#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min_diff = abs(nums[0]+nums[1]+nums[2]);
        int resu;
        int left, right;
        vector<int> nums_ = nums;
        sort(nums_.begin(), nums_.end());
        for (int i = 0; i < nums_.size(); ++i) {
            left = i+1;
            right = nums_.size() - 1;
            while (left < right)
            {
                int diff = nums_[i] + nums_[left] + nums_[right] - target;
                if (abs(diff) <= min_diff) {
                    min_diff = abs(diff);
                    resu = nums_[i] + nums_[left] + nums_[right];
                }
                if (diff < 0) {
                    left++;
                } else
                {
                    right--;
                }
            }
            
        }

        return resu;
    }
};
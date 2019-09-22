#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int last_idx = nums.size() -1;
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] > 0 && nums[i] <= last_idx)
            {
                
                if (nums[i] != nums[nums[i]]) {
                    swap(nums[i], nums[nums[i]]);
                } else {
                    break;
                }
            }
        }

        for (int i = 1; i <= last_idx; i++) {
            if (nums[i] != i) {
                return i;
            }
        }

        return last_idx++;
    }
};
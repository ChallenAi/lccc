#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left0, left1;
        left0 = left1 = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                left1++;
                swap(nums[i], nums[left1]);
            } else if (nums[i] == 0) {
                left0++;
                swap(nums[i], nums[left0]);
                left1++;
                if (left0 != left1) {
                    swap(nums[i], nums[left1]);
                }
            }
        }
        return;
    }
};

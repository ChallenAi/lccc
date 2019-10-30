#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int before_val = nums[0];
        int counter = 1;
        int ptr = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != before_val) {
                swap(nums[i], nums[ptr]);
                ptr++;
                counter = 1;
                before_val = nums[i];
                continue;
            }
            if (counter < 2) {
                swap(nums[i], nums[ptr]);
                ptr++;
                counter = 2;
                continue;
            }
        }
        return ptr;
    }
};

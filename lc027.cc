#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left_idx = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                left_idx++;
                swap(nums, left_idx, i);
            }
        }
        return left_idx+1;
    }

    void swap(vector<int>& nums, int idx1, int idx2) {
        int temp = nums[idx1];
        nums[idx1] = nums[idx2];
        nums[idx2] = temp;
    }
};
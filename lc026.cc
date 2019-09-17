#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left_idx = 0;
        int ptr = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[left_idx]) {
                left_idx++;
                swap(nums, i, left_idx);
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
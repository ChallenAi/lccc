#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target < nums[0]) {
            return 0;
        }
        if (target > nums[nums.size()-1]) {
            return nums.size();
        }
        int left = 0;
        int right = nums.size() -1;
        int mid;

        while (left+1 < right)
        {
            mid = (left + right) /2;

            if (target == nums[mid]) {
                return mid;
            } else if (target > nums[mid]) {
                left = mid;
            } else
            {
                right = mid;
            }
        }

        if (nums[left] == target) {
            return left;
        }

        if (nums[right] == target) {
            return right;
        }

        return left+1;
    }
};
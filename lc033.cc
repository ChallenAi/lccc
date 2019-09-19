#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() -1;
        int mid;
        while (right - left > 1) {
        // std::cout << mid << std::endl;            
        // std::cout << right << " " << left << std::endl;            
            mid = (left + right) / 2;
            if (nums[mid] > nums[0]) {
                left = mid;
            } else
            {
                right = mid;
            }
        }

        if (nums[mid-1] > nums[mid]) {
            right = mid -1;
            left = mid;
        } else {
            right = mid;
            left = mid +1;
        }

        if (target > nums[0]) {
            return binSearch(nums, 0, right, target);
        } else {
            return binSearch(nums, left, nums.size()-1, target);
        }

        return 0;
    }

    int binSearch(vector<int>& nums, int left, int right, int target) {
        int mid;
        while (right > left) {
            mid = (left + right) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                if (mid == left || mid == right) {
                    break;
                }
                right = mid;
            } else {
                if (mid == left || mid == right) {
                    break;
                }
                left = mid;
            }
        }

        return -1;
    }
};
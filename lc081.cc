#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // for ()
        int left = 0;
        int right = nums.size() -1;
        int mid = (left + right) /2;

        while (true) {
            if (nums[mid] > nums[left]) {
                left = mid;
            }
        }
    }
};
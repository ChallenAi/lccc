#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() -1;
        int mid;

        while (left < right) {
            mid = (left + right) /2;
            
            if (target == nums[mid]) {
                break;
            } else if (target > nums[mid]) {
                left = mid;
            } else {
                right = mid;
            }

            if (mid == (left + right) /2) {
                break;
            }
        }

        if (nums[mid] != target) {
            int resu[] = {-1, -1};
            return vector<int>(resu, resu+2);
        }

        left = right = mid;

        while (nums[left] == target)
        {
            left--;
        }

        while (nums[right] == target)
        {
            right++;
        }

        int resu[] = {left+1, right-1};

        return vector<int>(resu, resu+2);
    }
};
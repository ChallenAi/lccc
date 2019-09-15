#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        vector<int> nums_ = nums;
        sort(nums_.begin(), nums_.end());
        vector<vector<int> > resu;
        int left, right;
        for (int i = 0; i < nums_.size(); i++) {
            left = i+1;
            right = nums_.size() - 1;
            while (left < right) {
                if (nums_[left] + nums_[right] == 0 - nums_[i]) {
                    int resu1_[] = {nums_[i], nums_[left], nums_[right]};
                    resu.push_back(vector<int>(resu1_, resu1_+3));
                    // move left and right
                    left++;
                    right--;
                } else if ((nums_[left] + nums_[right]) > (0 - nums_[i])) {
                    // move right
                    left++;
                } else {
                    // move left
                    right--;
                }
            }
        }
        return resu;
    }
};

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    vector<int> nums;
    vector<vector<int> > resu;
    vector<int> cur_els;
    void rec() {
        if (cur_els.size() > nums.size()-1) {
            resu.push_back(cur_els);
            return;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (find(cur_els.begin(), cur_els.end(), nums[i]) == cur_els.end()) {
                cur_els.push_back(nums[i]);
                rec();
                cur_els.pop_back();
            }
        }
    }

public:
    vector<vector<int> > permute(vector<int>& nums) {
        this->nums = nums;
        rec();
        return resu;
    }
};
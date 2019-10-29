#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> nums;
    vector<vector<int> > resu;
    vector<int> curr;
    void recurse(int pos) {
        for (int i = pos; i < nums.size(); ++i) {
            curr.push_back(nums[i]);
            resu.push_back(curr);
            recurse(i+1);
            curr.pop_back();
        }
    }
public:
    vector<vector<int> > subsets(vector<int>& nums) {
        this->nums = nums;
        this->resu.push_back(vector<int>());

        recurse(0);

        return resu;
    }
};

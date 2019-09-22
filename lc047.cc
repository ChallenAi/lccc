#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> nums;
    vector<int> cur;
    vector<vector<int> > resu;
    void rec(vector<int> nums_left) {
        if (cur.size() >= 4) {
            for (int i = 0; i < resu.size(); ++i) {
                if (compare(cur, resu[i])) {
                    return;
                };
            }
            resu.push_back(cur);
            return;
        }
        for (int i = 0; i < nums_left.size(); ++i) {
            cur.push_back(nums_left[i]);

            vector<int> new_nums = nums_left;
            vector<int>::iterator iter = new_nums.begin();
            new_nums.erase(iter+i);

            rec(new_nums);
            cur.pop_back();
        }
    }

    bool compare(vector<int>& n1, vector<int>& n2) {
        if (n1.size() != n2.size()) {
            return false;
        }
        for (int i = 0; i < n1.size(); ++i) {
            if (n1[i] != n2[i]) {
                return false;
            }
        }
        return true;
    }
public:
    vector<vector<int> > permuteUnique(vector<int>& nums) {
        this->nums = nums;
        // sort(this->nums.begin(), this->nums.end());
        rec(this->nums);
        return resu;
    }
};
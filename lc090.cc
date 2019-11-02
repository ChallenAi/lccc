#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<vector<int> > resu;
    vector<int> nums, cur;

    void recurse(int pos) {
        if (!validateExist(resu, cur)) {
            resu.push_back(cur);
        }
        for (int i = pos; i < nums.size(); ++i) {
            cur.push_back(nums[i]);
            recurse(i+1);
            cur.pop_back();
        }
    }

    bool validateExist(vector<vector<int> > sets, vector<int> sub) {
        bool exist = false;
        for (int i = 0; i < sets.size(); ++i) {
            if (exist) {
                break;
            }
            if (sets[i].size() == sub.size()) {
                for (int j = 0; j < sub.size(); ++j) {
                    if (sub[j] != sets[i][j]) {
                        break;
                    }
                    if (j == sub.size() -1) {
                        exist = true;
                        break;
                    }
                }
            }
        }
        return exist;
    }
public:
    vector<vector<int> > subsetsWithDup(vector<int>& nums) {
        this->nums = nums;
        recurse(0);
        return resu;
    }
};
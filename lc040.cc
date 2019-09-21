#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> candidates;
    vector<vector<int> > resu;
    vector<int> cur;
    int cur_sum;
    int target;
    
    void rec(int start) {
        if (cur_sum == target) {
            for (int i = 0; i < resu.size(); ++i) {
                if (cmp(cur, resu[i])) {
                    return;
                }
            }
            resu.push_back(cur);
            return;
        }

        for (int i = start; i < candidates.size(); ++i) {
            if (cur_sum < target) {
                cur_sum += candidates[i];
                cur.push_back(candidates[i]);
                rec(i+1);
                cur.pop_back();
                cur_sum -= candidates[i];
            }
        }
    }

    bool cmp(vector<int>& v1, vector<int>& v2) const {
        if (v1.size() != v2.size()) {
            return false;
        }
        for (int i = 0; i < v1.size(); ++i) {
            if (v1[i] != v2[i]) {
                return false;
            }
        }

        return true;
    }
public:
    vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {
        this->candidates = candidates;
        sort(this->candidates.begin(), this->candidates.end());
        this->target = target;
        cur_sum = 0;

        rec(0);

        return resu;
    }
};
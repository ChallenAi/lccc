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
            resu.push_back(cur);
            return;
        }
        for (int i = start; i < candidates.size(); ++i) {
            if (cur_sum < target) {
                cur_sum += candidates[i];
                cur.push_back(candidates[i]);
                rec(i);
                cur.pop_back();
                cur_sum -= candidates[i];
            }
        }
    }
public:
    vector<vector<int> > combinationSum(vector<int>& candidates, int target) {
        this->candidates = candidates;
        sort(this->candidates.begin(), this->candidates.end());
        this->target = target;
        cur_sum = 0;

        rec(0);

        return resu;
    }
};
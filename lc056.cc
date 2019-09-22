#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int> > merge(vector<vector<int> >& intervals) {
        vector<vector<int> > resu;
        sort(intervals.begin(), intervals.end(), cmp_);
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] <= intervals[i-1][1]) {
                intervals[i-1][1] = max(intervals[i-1][1], intervals[i][1]);
                intervals[i][0] = intervals[i-1][0];
            }
        }

        set<int> s;
        for (int i = 0; i < intervals.size(); i++) {
            if (s.find(intervals[i][0]) == s.end()) {
                resu.push_back(intervals[i]);
                s.insert(intervals[i][0]);
            }
        }

        return resu;
    }

    static bool cmp_(const vector<int>& s1, const vector<int>& s2) {
        return s1[0] < s2[0];
    }
};
#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int> > insert(vector<vector<int> >& intervals, vector<int>& newInterval) {
        vector<vector<int> > resu;
        int left, right;
        for (int i = 0; i < intervals.size(); ++i) {
            if (newInterval[0] < intervals[i][0]) {
                left = i -1;
                break;
            }
        }

        for (int i = left; i < intervals.size(); ++i) {
            if (newInterval[1] > intervals[i][1]) {
                right = i -1;
                break;
            }
        }

        vector<int> new_interval;
        if (left < 0) {
            new_interval.push_back(newInterval[0]);
        } else {
            new_interval.push_back(min(intervals[left][0], newInterval[0]));
        }

        if (right >= intervals.size()) {
            new_interval.push_back(newInterval[1]);
        } else {
            new_interval.push_back(max(intervals[right][1], newInterval[1]));
        }

        bool pushed = false;
        for (int i = 0; i < intervals.size(); ++i) {
            if (intervals[i][1] < new_interval[0] || intervals[i][0] > new_interval[1]) {
                resu.push_back(intervals[i]);
            } else if (!pushed) {
                resu.push_back(new_interval);
                pushed = true;
            }
        }

        return resu;
    }
};


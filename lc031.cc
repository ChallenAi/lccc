#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // find last ascend dual-el-seq,
        int first_ascend = -1;
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] < nums[i+1]) {
                first_ascend = i;
            }
        }

        if (first_ascend == -1) {
            // sort all
            sort(nums.begin(), nums.end());
            return;
        }

        // find start node's next el
        int nextIdx = first_ascend+1;
        for (int i = first_ascend+2; i < nums.size(); ++i) {
            if (nums[i] > nums[first_ascend]) {
                if (nums[i] < nums[nextIdx]) {
                    nextIdx = i;
                }
            }
        }

        // fix the next el
        swap(nums, nextIdx, first_ascend);

        // sort the rest els and fix them. (select sort)
        // int min_num_idx = first_ascend+1;
        // for (int idx = first_ascend+1; idx < nums.size(); ++idx) {
        //     for (int i = idx; i < nums.size(); i++) {
        //         if (nums[i] < nums[min_num_idx]) {
        //             min_num_idx = i;
        //         }
        //     }
        //     swap(nums, idx, min_num_idx);
        // }

        vector<int>::iterator iter = nums.begin();
        for (int i = 0; i < first_ascend+1; i++) {
            iter++;
        }

        sort(iter, nums.end());
        return;
    }

    void swap(vector<int>& nums, int idx1, int idx2) {
        int temp = nums[idx1];
        nums[idx1] = nums[idx2];
        nums[idx2] = temp;
    }
};
#include <iostream>
#include <vector>
#include <unordered_map>
#include "lc031.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    int nums1[] = {1,2,3}; // 1,3,2
    int nums2[] = {3,2,1}; // 1,2,3
    int nums3[] = {1,1,5}; // 1,5,1
    int nums4[] = {8,6,2,4,1,5,3}; // 8,6,2,4,3,1,5

    vector<vector<int> > nums;
    nums.push_back(vector<int>(nums1, nums1+3));
    nums.push_back(vector<int>(nums2, nums2+3));
    nums.push_back(vector<int>(nums3, nums3+3));
    nums.push_back(vector<int>(nums4, nums4+7));

    Solution s;
    for (int i = 0; i < nums.size(); i++) {
        s.nextPermutation(nums[i]);
    }

    for (int i = 0; i < nums.size(); i++) {
        for (int idx = 0; idx < nums[i].size(); ++idx) {
            std::cout << nums[i][idx] << " ";
        }
        std::cout << std::endl;
    }

    if (false) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


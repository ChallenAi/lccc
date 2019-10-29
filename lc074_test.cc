#include <iostream>
#include <vector>
#include "lc074.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = { 1,   3,  5,  7 };
    int nums2_[] = { 10, 11, 16, 20 };
    int nums3_[] = { 23, 30, 34, 50 };
    vector<vector<int> > arr;
    arr.push_back(vector<int>(nums1_, nums1_+4));
    arr.push_back(vector<int>(nums2_, nums2_+4));
    arr.push_back(vector<int>(nums3_, nums3_+4));

    Solution s;
    bool resu1 = s.searchMatrix(arr, 3);
    bool resu2 = s.searchMatrix(arr, 13);

    if (resu1 && !resu2) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
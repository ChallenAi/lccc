#include <iostream>
#include <vector>
#include "lc064.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = { 1, 3, 1 };
    int nums2_[] = { 1, 3, 1 };
    int nums3_[] = { 4, 2, 1 };

    vector<vector<int> > grid;
    grid.push_back(vector<int>(nums1_, nums1_+3));
    grid.push_back(vector<int>(nums2_, nums2_+3));
    grid.push_back(vector<int>(nums3_, nums3_+3));

    Solution s;
    int resu = s.minPathSum(grid);

    if (resu == 7) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
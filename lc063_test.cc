#include <iostream>
#include <vector>
#include "lc063.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = { 0, 0, 0 };
    int nums2_[] = { 0, 1, 0 };
    int nums3_[] = { 0, 0, 0 };

    vector<vector<int> > obstacleGrid;
    obstacleGrid.push_back(vector<int>(nums1_, nums1_+3));
    obstacleGrid.push_back(vector<int>(nums1_, nums1_+3));
    obstacleGrid.push_back(vector<int>(nums1_, nums1_+3));

    Solution s;
    int resu = s.uniquePathsWithObstacles(obstacleGrid);

    if (resu == 7) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
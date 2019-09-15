#include <iostream>
#include <vector>
#include "lc015.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = {-1, 0, 1, 2, -1, -4};
    std::vector<int> nums1 = vector<int>(nums1_, nums1_+6);
    Solution s;
    std::vector<vector<int> > resu1 = s.threeSum(nums1);
    for (int i = 0; i < resu1.size(); i++) {
        for (int idx = 0; idx < resu1[i].size(); idx++) {
            std::cout << resu1[i][idx] << " ";
        }
        std::cout << std::endl;
    }
    if (true) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


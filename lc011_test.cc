#include <iostream>
#include <vector>
#include "lc011.cc"

int main(int argc, char const *argv[])
{
    int nums_[] = {1,8,6,2,5,4,8,3,7};
    int nums2_[] = {1, 3, 2, 11, 2, 3, 4, 43, 5, 8, 4, 5};
    std::vector<int> nums = vector<int>(nums_, nums_+9);
    std::vector<int> nums2 = vector<int>(nums2_, nums2_+12);
    Solution s;
    int resu1 = s.maxArea(nums);
    int resu2 = s.maxArea(nums2);
    if (resu1 == 49 && resu2 == 48) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


#include <iostream>
#include <vector>
#include "lc011.cc"

int main(int argc, char const *argv[])
{
    int nums_[] = {1,8,6,2,5,4,8,3,7};
    std::vector<int> nums = vector<int>(nums_, nums_+9);
    Solution s;
    int resu1 = s.maxArea(nums);
    if (resu1 == 49) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


#include <iostream>
#include <vector>
#include "lc018.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = {-1, 2, 1, -4};
    std::vector<int> nums1 = vector<int>(nums1_, nums1_+4);
    Solution s;
    int resu1 = s.threeSumClosest(nums1, 1);
    if (resu1 == 2) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


#include <iostream>
#include <vector>
#include "lc027.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = {0,1,2,2,3,0,4,2};
    std::vector<int> nums1 = vector<int>(nums1_, nums1_+8);
    Solution s;
    int resu1 = s.removeElement(nums1, 2);
    
    for (int i = 0; i < resu1; ++i) {
        std::cout << nums1[i] << " ";
    }
    std::cout << std::endl;

    if (resu1 == 5) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


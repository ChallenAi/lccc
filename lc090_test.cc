#include <iostream>
#include <vector>
#include "lc090.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = { 1, 2, 2 };
    vector<int> nums1 = vector<int>(nums1_, nums1_+3);

    Solution s;
    vector<vector<int> > resu = s.subsetsWithDup(nums1);
    
    if (resu.size() == 6) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
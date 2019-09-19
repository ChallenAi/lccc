#include <iostream>
#include <vector>
#include "lc035.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    int nums1_[] = {1, 3, 5, 7, 8, 10, 11, 13};
    vector<int> nums1 = vector<int>(nums1_, nums1_+8);

    Solution s;
    int resu1 = s.searchInsert(nums1, 0);
    int resu2 = s.searchInsert(nums1, 1);
    int resu3 = s.searchInsert(nums1, 4);
    int resu4 = s.searchInsert(nums1, 11);
    int resu5 = s.searchInsert(nums1, 15);

    // std::cout << resu1 << std::endl;
    // std::cout << resu2 << std::endl;
    // std::cout << resu3 << std::endl;
    // std::cout << resu4 << std::endl;
    // std::cout << resu5 << std::endl;

    if (resu1 == 0 && resu2 == 0 && resu3 == 2 && resu4 == 6 && resu5 == 8) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


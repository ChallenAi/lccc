#include <iostream>
#include <vector>
#include "lc034.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    int nums1_[] = {5,7,7,8,8,10};
    int nums2_[] = {5,7,7,8,8,10};
    vector<int> nums1 = vector<int>(nums1_, nums1_+6);
    vector<int> nums2 = vector<int>(nums2_, nums2_+6);

    Solution s;
    vector<int> resu1 = s.searchRange(nums1, 8);
    vector<int> resu2 = s.searchRange(nums2, 6);

    // std::cout << resu1[0] << " " << resu1[1] << std::endl;
    // std::cout << resu2[0] << " " << resu2[1] << std::endl;

    if (resu1[0] == 3 && resu1[1] == 4 && resu2[0] == -1 && resu2[1] == -1) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


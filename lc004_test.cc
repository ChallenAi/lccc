#include <iostream>
#include "lc004.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    int nums1_[] = {1, 3};
    int nums2_[] = {2};
    vector<int> nums1 = vector<int>(nums1_, nums1_+2);
    vector<int> nums2 = vector<int>(nums2_, nums2_+1);

    int nums3_[] = {1, 2};
    int nums4_[] = {3, 4};
    vector<int> nums3 = vector<int>(nums3_, nums3_+2);
    vector<int> nums4 = vector<int>(nums4_, nums4_+2);

    Solution s;
    // double resu1 = s.findMedianSortedArrays(nums1, nums2);
    double resu2 = s.findMedianSortedArrays(nums3, nums4);

    std::cout << resu2 << std::endl;
    
    // if (resu1 == 2.0f && resu2 == 2.5f) {
    //     std::cout << "pass" << std::endl;
    // } else {
    //     std::cout << "not pass!" << std::endl;
    // }
    return 0;
}

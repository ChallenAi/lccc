#include <iostream>
#include <vector>
#include "lc033.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    int nums1_[] = {4,5,6,7,0,1,2,3};
    int nums2_[] = {4,5,6,7,0,1,2};
    vector<int> nums1 = vector<int>(nums1_, nums1_+8);
    vector<int> nums2 = vector<int>(nums2_, nums2_+7);

    Solution s;
    int resu1 = s.search(nums1, 0);
    int resu2 = s.search(nums2, 3);

    // std::cout << resu1 << std::endl;
    // std::cout << resu2 << std::endl;

    if (resu1 == 4 && resu2 == -1) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


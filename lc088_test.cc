#include <iostream>
#include <vector>
#include "lc088.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = { 1,2,3,0,0,0 };
    int nums2_[] = { 2,5,6 };
    vector<int> arr1 = vector<int>(nums1_, nums1_+6);
    vector<int> arr2 = vector<int>(nums2_, nums2_+9);

    Solution s;
    s.merge(arr1, 3, arr2, 3);

    if (arr1[0] == 1 && arr1[3] == 3) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
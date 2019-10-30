#include <iostream>
#include <vector>
#include "lc080.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = { 1,1,1,2,2,3 };
    int nums2_[] = { 0,0,1,1,1,1,2,3,3 };
    vector<int> arr1 = vector<int>(nums1_, nums1_+6);
    vector<int> arr2 = vector<int>(nums2_, nums2_+9);

    Solution s;
    int resu1 = s.removeDuplicates(arr1);
    int resu2 = s.removeDuplicates(arr2);

    if (resu1 == 5 && resu2 == 7) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include "lc081.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = { 2, 5, 6, 0, 0, 1, 2 };
    vector<int> arr1 = vector<int>(nums1_, nums1_+7);

    Solution s;
    bool resu1 = s.search(arr1, 0);
    bool resu2 = s.search(arr1, 3);

    if (resu1 && !resu2) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
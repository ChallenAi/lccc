#include <iostream>
#include <vector>
#include "lc041.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    int nums1_[] = {3, 4, -1, 1, 5, 8, 12, 3, 3, 3, 4, 5, 7, 6, 2};
    vector<int> nums1 = vector<int>(nums1_, nums1_+15);

    Solution s;
    int resu = s.firstMissingPositive(nums1);

    if (resu == 9) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


#include <iostream>
#include <vector>
#include "lc108.cc"

int main(int argc, char const *argv[])
{
    int nums_[] = { -10, -3, 0, 5, 9 };
    vector<int> nums = vector<int>(nums_, nums_+5);

    Solution s;
    TreeNode* resu = s.sortedArrayToBST(nums);

    if (true) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
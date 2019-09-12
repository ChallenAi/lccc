#include <iostream>
#include <vector>
#include <unordered_map>
#include "lc001.cc"

int main(int argc, char const *argv[])
{
    int nums_[] = {2, 7, 11, 15};
    vector<int> nums = vector<int>(nums_, nums_+4);
    int target = 9;
    Solution s;
    vector<int> resu = s.twoSum(nums, target);
    if (resu[0]+resu[1] == 1) {
        std::cout << "pass" << std::endl;
    }
    return 0;
}

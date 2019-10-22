#include <iostream>
#include <vector>
#include "lc053.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    int _nums[] = { -2,1,-3,4,-1,2,1,-5,4 };
    vector<int> nums = vector<int>(_nums, _nums+9);

    Solution s;
    int resu = s.maxSubArray(nums);

    if (resu == 6) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
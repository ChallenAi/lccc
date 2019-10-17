#include <iostream>
#include <vector>
#include "lc042.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    int nums1_[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> nums1 = vector<int>(nums1_, nums1_+11);

    Solution s;
    int resu = s.trap(nums1);

    if (resu == 6) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


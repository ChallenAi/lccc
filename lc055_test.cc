#include <iostream>
#include <vector>
#include "lc055.cc"

using namespace std;

int main(int argc, char const *argv[])
{
    int nums1_[] = {2,3,1,1,4};
    int nums2_[] = {3,2,1,0,4};
    
    vector<int> nums1 = vector<int>(nums1_, nums1_+5);
    vector<int> nums2 = vector<int>(nums2_, nums2_+5);

    Solution s;
    bool resu1 = s.canJump(nums1);
    bool resu2 = s.canJump(nums2);
    
    if (resu1 == true && resu2 == false) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
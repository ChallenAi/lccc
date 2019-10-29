#include <iostream>
#include <vector>
#include "lc075.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = { 2,0,2,1,1,0,1,2,1,0, };
    int target1_[] = { 0,0,0,1,1,1,1,2,2,2 };
    vector<int> arr = vector<int>(nums1_, nums1_+10);

    Solution s;
    s.sortColors(arr);

    bool pass = true;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] != target1_[i]) {
            pass = false;
            break;
        }
    }

    if (pass) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
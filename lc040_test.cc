#include <iostream>
#include <vector>
#include "lc040.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    int nums1_[] = {10,1,2,7,6,1,5};
    vector<int> nums1 = vector<int>(nums1_, nums1_+7);

    Solution s;
    vector<vector<int> > resu = s.combinationSum2(nums1, 8);

    for (int i = 0; i < resu.size(); ++i) {
        for (int j = 0; j < resu[i].size(); ++j) {
            cout << resu[i][j] << " ";
        }
        cout << endl;
    }

    if (true) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


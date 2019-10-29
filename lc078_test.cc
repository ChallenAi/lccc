#include <iostream>
#include <vector>
#include "lc078.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = { 1,2,3 };
    vector<int> arr = vector<int>(nums1_, nums1_+3);

    Solution s;
    vector<vector<int> > resu = s.subsets(arr);
    // for (int i = 0; i < resu.size(); ++i) {
    //     for (int j = 0; j < resu[i].size(); ++j) {
    //         std::cout << resu[i][j] << " ";
    //     }
    //     std::cout << endl;
    // }

    if (resu.size() == 8) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
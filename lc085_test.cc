#include <iostream>
#include <vector>
#include "lc085.cc"

int main(int argc, char const *argv[])
{
    char nums0_[] = { '1', '0', '1', '0', '0' };
    char nums1_[] = { '1', '0', '1', '1', '1' };
    char nums2_[] = {'1', '1', '1', '1', '1' };
    char nums3_[] = { '1', '0', '0', '1', '0' };

    vector<vector<char> > matrix;
    matrix.push_back(vector<char>(nums0_, nums0_+5));
    matrix.push_back(vector<char>(nums1_, nums1_+5));
    matrix.push_back(vector<char>(nums2_, nums2_+5));
    matrix.push_back(vector<char>(nums3_, nums3_+5));

    Solution s;
    int resu = s.maximalRectangle(matrix);

    if (resu == 6) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
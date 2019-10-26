#include <iostream>
#include <vector>
#include "lc121.cc"

int main(int argc, char const *argv[])
{
    int nums1_[] = { 2 };
    int nums2_[] = { 3, 4 };
    int nums3_[] = { 6, 5, 7 };
    int nums4_[] = { 4, 1, 8, 3 };

    vector<vector<int> > triangle;
    triangle.push_back(vector<int>(nums1_, nums1_+1));
    triangle.push_back(vector<int>(nums2_, nums2_+2));
    triangle.push_back(vector<int>(nums3_, nums3_+3));
    triangle.push_back(vector<int>(nums4_, nums4_+4));

    Solution s;
    int resu = s.maxProfit(triangle);

    if (resu == 11) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
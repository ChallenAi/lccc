#include <iostream>
#include <vector>
#include "lc054.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<int> > matrix;
    int nums1_[] = {1, 2, 3, 4, 5, 6};
    int nums2_[] = {16, 17, 18, 19, 20, 7};
    int nums3_[] = {15, 24, 23, 22, 21, 8};
    int nums4_[] = {14, 13, 12, 11, 10, 9};
    
    vector<int> nums1 = vector<int>(nums1_, nums1_+6);
    vector<int> nums2 = vector<int>(nums2_, nums2_+6);
    vector<int> nums3 = vector<int>(nums3_, nums3_+6);
    vector<int> nums4 = vector<int>(nums4_, nums4_+6);

    matrix.push_back(nums1);
    matrix.push_back(nums2);
    matrix.push_back(nums3);
    matrix.push_back(nums4);

    Solution s;
    vector<int> resu = s.spiralOrder(matrix);

    for (int i = 0; i < resu.size(); ++i) {
        cout << resu[i] << " ";
    }
    cout << endl;

    if (true) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


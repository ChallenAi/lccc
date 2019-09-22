#include <iostream>
#include <vector>
#include "lc048.cc"
using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<int> > matrix;
    int nums1_[] = {1, 2, 3, 4};
    int nums2_[] = {5, 6, 7, 8};
    int nums3_[] = {9, 10, 11, 12};
    int nums4_[] = {13, 14, 15, 16};
    
    vector<int> nums1 = vector<int>(nums1_, nums1_+4);
    vector<int> nums2 = vector<int>(nums2_, nums2_+4);
    vector<int> nums3 = vector<int>(nums3_, nums3_+4);
    vector<int> nums4 = vector<int>(nums4_, nums4_+4);

    matrix.push_back(nums1);
    matrix.push_back(nums2);
    matrix.push_back(nums3);
    matrix.push_back(nums4);

    Solution s;
    s.rotate(matrix);

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
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


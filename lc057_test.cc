#include <iostream>
#include <vector>
#include "lc057.cc"

using namespace std;

int main(int argc, char const *argv[])
{
    int nums1_[] = {1, 3};
    int nums2_[] = {6, 9};
    int nums3_[] = {2, 5};
    vector<vector<int> > intervals;
    intervals.push_back(vector<int>(nums1_, nums1_+2));
    intervals.push_back(vector<int>(nums2_, nums2_+2));
    vector<int> new_interval = vector<int>(nums3_, nums3_+2);

    Solution s;
    vector<vector<int> > resu = s.insert(intervals, new_interval);
    if (resu.size() == 2 && resu[0][0] == 1 && resu[0][1] == 5) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}

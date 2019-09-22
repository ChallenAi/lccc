#include <vector>
#include <iostream>
#include "lc056.cc"

using namespace std;

int main(int argc, char const *argv[])
{
    // c++ 11
    vector<vector<int> > test_case {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18},
    };
    // vector<int> v1 = {1, 3};
    // test_case.push_back({1, 3});
    // test_case.push_back({2, 6});
    // test_case.push_back({8, 10});
    // test_case.push_back({15, 18});
    Solution s;
    vector<vector<int> > resu = s.merge(test_case);
    for (int i = 0; i < resu.size(); ++i) {
        std::cout << " [" << resu[i][0] << " " << resu[i][1] << "] ";
    }
    std::cout << std::endl;
    
    return 0;
}

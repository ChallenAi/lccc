#include <iostream>
#include <vector>
#include "lc077.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int> > resu = s.combine(4, 2);

    // for (int i = 0; i < resu.size(); ++i) {
    //     for (int j = 0; j < resu[i].size(); ++j) {
    //         std::cout << resu[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }

    if (resu.size() == 6) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
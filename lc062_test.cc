#include <iostream>
#include "lc062.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    int resu1 = s.uniquePaths(3, 2);
    int resu2 = s.uniquePaths(7, 3);

    if (resu1 == 3 && resu2 == 28) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
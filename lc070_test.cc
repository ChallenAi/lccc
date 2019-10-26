#include <iostream>
#include "lc070.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    int resu1 = s.climbStairs(2);
    int resu2 = s.climbStairs(3);

    if (resu1 == 2 && resu2 == 3) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
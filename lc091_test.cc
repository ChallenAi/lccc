#include <iostream>
#include "lc091.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    int resu = s.numDecodings("12");
    int resu2 = s.numDecodings("226");

    if (resu == 2 && resu2 == 3) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
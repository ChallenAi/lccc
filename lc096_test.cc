#include <iostream>
#include "lc096.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    int resu = s.numTrees(3);

    if (resu == 5) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
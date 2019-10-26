#include <iostream>
#include "lc072.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    int resu1 = s.minDistance("horse", "ros");
    int resu2 = s.minDistance("intention", "execution");

    if (resu1 == 3 && resu2 == 5) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
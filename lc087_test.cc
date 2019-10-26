#include <iostream>
#include "lc087.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    bool resu = s.isScramble("great", "rgeat");
    bool resu2 = s.isScramble("abcde", "caebd");

    if (resu && !resu2) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
#include <iostream>
#include "lc097.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    bool resu = s.isInterleave("aabcc", "dbbca", "aadbbcbcac");
    bool resu2 = s.isInterleave("aabcc", "dbbca", "aadbbbaccc");

    if (resu && !resu2) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
#include <iostream>
#include "lc009.cc"

int main(int argc, char const *argv[])
{
    int i1 = 112121211;
    int i2 = -121;
    int i3 = 10;
    Solution s;
    bool resu1 = s.isPalindrome(i1);
    bool resu2 = s.isPalindrome(i2);
    bool resu3 = s.isPalindrome(i3);
    if (resu1 && !resu2 && !resu3) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


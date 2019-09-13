#include <iostream>
#include <string>
#include "lc005.cc"

int main(int argc, char const *argv[])
{
    string str1 = "babad";
    string str2 = "cbbd";
    Solution s;
    string resu1 = s.longestPalindrome(str1);
    string resu2 = s.longestPalindrome(str2);
    if ((resu1 == "aba" || resu1 == "bab") && resu2 == "bb") {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}

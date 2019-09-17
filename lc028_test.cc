#include <iostream>
#include <string>
#include "lc028.cc"

int main(int argc, char const *argv[])
{
    string str1 = "hello";
    string str11 = "ll";
    string str2 = "aaaaa";
    string str22 = "bba";
    Solution s;
    int resu1 = s.strStr(str1, str11);
    int resu2 = s.strStr(str2, str22);
    if (resu1 == 2 && resu2 == -1) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
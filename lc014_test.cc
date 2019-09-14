#include <iostream>
#include <vector>
#include "lc014.cc"

int main(int argc, char const *argv[])
{
    string str1_[] = {"flower","flow","flight"};
    string str2_[] = {"dog","racecar","car"};
    std::vector<string> str1 = vector<string>(str1_, str1_+3);
    std::vector<string> str2 = vector<string>(str2_, str2_+3);
    
    Solution s;
    string resu1 = s.longestCommonPrefix(str1);
    string resu2 = s.longestCommonPrefix(str2);
    if (resu1 == "fl" && resu2 == "") {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


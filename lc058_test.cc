#include <iostream>
#include <vector>
#include "lc058.cc"

using namespace std;

int main(int argc, char const *argv[])
{
    string s1 = "Hello World  ";
    string s2 = " ";

    Solution s;
    int resu1 = s.lengthOfLastWord(s1);
    int resu2 = s.lengthOfLastWord(s2);
    
    if (resu1 == 5 && resu2 == 0) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
}

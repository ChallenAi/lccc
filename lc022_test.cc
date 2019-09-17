#include <iostream>
#include <vector>
#include <string>
#include "lc022.cc"

int main(int argc, char const *argv[])
{
    vector<string> resu_;
    resu_.push_back("((()))");
    resu_.push_back("(()())");
    resu_.push_back("(())()");
    resu_.push_back("()(())");
    resu_.push_back("()()()");
    Solution s;
    vector<string> resu1 = s.generateParenthesis(3);
    if (false) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


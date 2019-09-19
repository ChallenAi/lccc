#include <string>
#include "lc032.cc"

using namespace std;

int main(int argc, const char** argv) {
    string str1 = "()))()";
    string str2 = ")()())()))";
    Solution s;
    int resu1 = s.longestValidParentheses(str1);
    int resu2 = s.longestValidParentheses(str2);

    // std::cout << resu1 << std::endl;
    // std::cout << resu2 << std::endl;

    if (resu1 == 2 && resu2 == 4) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
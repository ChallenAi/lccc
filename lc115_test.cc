#include <iostream>
#include "lc115.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    int resu = s.numDistinct("rabbbit", "rabbit");
    int resu2 = s.numDistinct("babgbag", "bag");

    if (resu == 3 && !resu2 == 5) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
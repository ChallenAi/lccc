#include <iostream>
#include <vector>
#include "lc060.cc"

using namespace std;

int main(int argc, char const *argv[])
{
    Solution s;
    string resu1 = s.getPermutation(3, 3);
    string resu2 = s.getPermutation(4, 9);

    if (resu1 == "213" && resu2 == "2314") {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
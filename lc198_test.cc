#include <iostream>
#include <vector>
#include "lc198.cc"

using namespace std;

int main(int argc, const char** argv) {

    int test_[] = { 2,7,9,3,1 };
    int test2_[] = { 1,2,3,1 };
    vector<int> test = vector<int>(test_, test_+5);
    vector<int> test2 = vector<int>(test2_, test2_+4);

    Solution s;
    int resu = s.rob(test);
    int resu2 = s.rob(test2);

    if (resu == 12 && resu2 == 4) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
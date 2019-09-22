#include <iostream>
#include <vector>
#include "lc095.cc"

using namespace std;

int main(int argc, const char** argv) {
    Solution s;
    vector<TreeNode*> resu = s.generateTrees(3);
    
    bool pass = true;
    // for (int i = 1; i < resu.size(); ++i) {
    //     if (resu[i] < resu[i-1]) {
    //         pass = false;
    //         break;
    //     }
    // }

    if (pass) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
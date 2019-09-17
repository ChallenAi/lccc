#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "lc022.cc"

int main(int argc, char const *argv[])
{
    vector<string> resu_;
    resu_.push_back("((()))");
    resu_.push_back("(()())");
    resu_.push_back("(())()");
    resu_.push_back("()(())");
    resu_.push_back("()()()");

    unordered_map<string, bool> cmps;
    bool pass = true;
    Solution s;
    vector<string> resu1 = s.generateParenthesis(3);
    if (resu1.size() != resu_.size()) {
        pass = false;
    } else {
        for (int i = 0; i < resu1.size(); i++) {
            cmps[resu1[i]] = true;
        }
        for (int i = 0; i < resu_.size(); ++i) {
            if (cmps.find(resu_[i]) != cmps.end()) {
                pass = false;
            }
        }
    }
    if (pass) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


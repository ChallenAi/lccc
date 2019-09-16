#include <iostream>
#include <unordered_map>
#include <string>
#include "lc020.cc"

int main(int argc, char const *argv[])
{
    unordered_map<string, bool> test_content;
    test_content["()"] = true;
    test_content["()[]{}"] = true;
    test_content["(]"] = false;
    test_content["([)]"] = false;
    test_content["{[]}"] = true;
    test_content[""] = true;

    Solution s;
    for (unordered_map<string, bool>::iterator iter = test_content.begin(); iter != test_content.end(); iter++) {
        if (s.isValid(iter->first) != test_content[iter->first]) {
            std::cout << "not pass!" << std::endl;
            return 1;
        }
    }

    std::cout << "pass" << std::endl;
    return 0;
}


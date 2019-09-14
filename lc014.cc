#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            if (prefix.size() > strs[i].size()) {
                prefix = prefix.substr(0, strs[i].size());
            };
            for (int i_prefix = 0; i_prefix < prefix.size(); ++i_prefix) {
                if (prefix.at(i_prefix) != strs[i].at(i_prefix)) {
                    prefix = prefix.substr(0, i_prefix);
                    break;
                }
            }
        }

        return prefix;
    }
};
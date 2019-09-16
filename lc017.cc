#include <vector>
#include <string>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> resu;
        unordered_map<char, string> dict;
        dict[2] = "abc";
        dict[3] = "def";
        dict[4] = "ghi";
        dict[5] = "jkl";
        dict[6] = "mno";
        dict[7] = "pqrs";
        dict[8] = "tuv";
        dict[9] = "wxyz";
        queue<string> q;
        for (int i = 0; i < digits.size(); ++i) {
            handleCurrentNum(digits[i], resu, dict);
        }
        
    }

    void handleCurrentNum(char num, vector<string> &resu, unordered_map<char, string> dict) {
        
        return;
    }
};

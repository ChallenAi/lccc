#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> resu;
        queue<string> qs;
        qs.push("");
        unordered_map<char, string> dict;
        // cares about the number char............waste my time here
        dict.insert(pair<char, string>('2', "abc"));
        dict.insert(pair<char, string>('3', "def"));
        dict.insert(pair<char, string>('4', "ghi"));
        dict.insert(pair<char, string>('5', "jkl"));
        dict.insert(pair<char, string>('6', "mno"));
        dict.insert(pair<char, string>('7', "pqrs"));
        dict.insert(pair<char, string>('8', "tuv"));
        dict.insert(pair<char, string>('9', "wxyz"));

        // for (unordered_map<char,string>::iterator iter = dict.begin(); iter != dict.end(); iter++) {
        //     std::cout << iter->first << std::endl;
        // }

        for (int i = 0; i < digits.size(); ++i) {
            if (dict.find((int)digits.at(i)) != dict.end()) {
                handleCurrentNum(qs, dict[(int)digits.at(i)]);
            }
        }

        while (!qs.empty())
        {
            resu.push_back(qs.front());
            qs.pop();
        }

        return resu;
    }

    void handleCurrentNum(queue<string> &qs, string s) {
        int origin_len = qs.size();
        for (int i = 0; i < origin_len; ++i) {
            string current = qs.front();
            for (int idx = 0; idx < s.size(); ++idx) {
                qs.push(current + s.at(idx));
            }
            qs.pop();
        }
        return;
    }
};

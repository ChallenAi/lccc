#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> resu;

        unordered_map<char, int> cnts;
        int cnt = 3;

        if (n == 0) {
            return resu;
        }
        for (int i = 0; i < n*2; ++i) {
            string resu_str = "";
            for (int idx = 0; idx < 2; ++idx) {
            }
        }
        return resu;   
    }

    vector<string> handleNext(vector<string> before_str, int cnt)
};
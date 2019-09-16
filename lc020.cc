#include <string>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 0) {
            return true;
        }
        if (s.size()%2 != 0) {
            return false;
        }

        unordered_map<char, char> brackets;
        brackets[')'] = '(';
        brackets['}'] = '{';
        brackets[']'] = '[';

        stack<char> st;

        for (int i = 0; i < s.size(); ++i) {
            if (brackets.find(s.at(i)) != brackets.end()) {
                if (st.top() != brackets[s.at(i)]) {
                    return false;
                }
                st.pop();
            } else
            {
                st.push(s.at(i));
            }
        }

        return true;
    }
};
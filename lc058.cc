#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        s = s.erase(0, s.find_first_not_of(" "));
        // s = s.erase(s.find_last_not_of(" ")+1, s.length() -1);
        s = s.erase(s.find_last_not_of(" ")+1);
        if (s.length() == 0) {
            return 0;
        }
        int resu = 0;
        for (int i = s.length()-1; i >= 0; --i) {
            if (s.at(i) == ' ') {
                return resu;
            }
            resu++;
        }
        return resu;
    }
};

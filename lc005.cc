#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int left, right;
        string current_max = s.substr(0,1);
        
        for (int i = 1; i < s.size(); i++) {
            // 1. i is the mid
            left = i-1;
            right = i+1;
            while (left >= 0 && right < s.size())
            {
                if (s.at(left) == s.at(right)) {
                    if ((right - left + 1) > current_max.size()) {
                        // substr(pos, offset_n)
                        current_max = s.substr(left, right-left+1);
                    }
                    left--;
                    right++;
                } else {
                    break;
                }
            }

            // 2. i and i-1 is the mid
            left = i-1;
            right = i;
            while (left >= 0 && right < s.size())
            {
                if (s.at(left) == s.at(right)) {
                    if ((right - left + 1) > current_max.size()) {
                        current_max = s.substr(left, right-left+1);
                    }
                    left--;
                    right++;
                } else {
                    break;
                }
            }
        }
        return current_max;
    }
};
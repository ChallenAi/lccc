#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        int left = 0;
        char current_char;
        for (int i = 0; i < s.size(); i++)
        {
            // map str

            // judge if new char  appears before
            // if appears: move left+n, move right++

            current_char = s.at(i);
            bool need_update_max = true;
            for (int idx = left; idx < i; idx++) {
                if (s.at(idx) == current_char) {
                    left = idx+1;
                    need_update_max = false;
                }
            }

            if (need_update_max && i - left +1 > max_len) {
                max_len = i - left+1;
            }
        }
        
        return max_len;
    }
};
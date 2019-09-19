#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

// brute force
// for every el , we check the longest O(n^2)
class Solution {
public:
    int longestValidParentheses(string s) {
        int current_len = 0;
        int left_brackets_cnt = 0;
        int max_len = 0;

        for (int i = 0; i < s.size(); ++i) {
            for (int j = i; j < s.size(); ++j) {
                if (s[j] == '(') {
                    left_brackets_cnt++;
                } else {
                    if (left_brackets_cnt > 0) {
                        left_brackets_cnt--;
                        current_len += 2;
                    } else {
                        break;
                    }
                }
            }

            if (current_len > max_len) {
                max_len = current_len;
            }

            left_brackets_cnt = 0;
            current_len = 0;
        }

        return max_len; 
    }
};
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x % 10 == 0) {
            return false;
        }
        string s = to_string(x);
        int left, right;
        int mid_idx = s.size() / 2;
        if (s.size()%2 == 0) {
            left = mid_idx - 1;
            right = mid_idx;
        } else
        {
            left = mid_idx - 1;
            right = mid_idx + 1;
        }

        while (left >= 0 && right < s.size()) {
            if (s.at(left) != s.at(right)) {
                return false;
            }

            left--;
            right++;
        }

        return true;
        
    }
};
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int* shift_map = preHandle(needle);
        
        for (int i = 0; i < haystack.size(); ) {
            for (int j = 0; j < needle.size(); ++j) {
                if (needle[j] != haystack[j+i]) {
                    break;
                }
                if (j == needle.size() -1) {
                    return i;
                }
            }
            i += shift_map[haystack[i+needle.size()]];
        }
        
        return -1;
    }

    int* preHandle(string needle) {
        int *p = new int[256];

        for (int i = 0; i < 256; ++i) {
            p[i] = needle.size() +1;
        }
        
        for (int i = 0; i < needle.size(); ++i) {
            p[needle[i]] = needle.size() - i;
        }

        return p;
    }
};
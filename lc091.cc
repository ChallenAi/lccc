#include <iostream>

using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        int counter = 1;
        char before = s.at(0);
        for (int i = 1; i < s.size(); ++i) {
            if (before == '1') {
                counter++;
                // turn char to int ~     =>    x - '0'
            } else if (before == '2' && (int)(s.at(i)-'0')) {
                counter++;
            }
            before = s.at(i);
        }

        return counter;
    }
};
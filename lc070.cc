#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int counter, max_level;
    void handleNextStair(int level) {
        if (level == max_level) {
            counter++;
            return;
        }

        if (level +1 < max_level) {
            handleNextStair(level+2);
        }

        if (level < max_level) {
            handleNextStair(level+1);
        }

        return;
    }
public:
    int climbStairs(int n) {
        counter = 0;
        max_level = n;

        handleNextStair(0);
        
        return counter;
    }
};
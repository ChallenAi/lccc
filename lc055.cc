#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        for (int i = nums.size()-1; i >= 0; i--) {
            if (nums[i] == 0) {
                int counter = 1;
                while(i - counter >= 0) {
                    if (nums[i - counter] - 1 > counter) {
                        i = i - counter;
                        break;
                    }
                    if (counter == i) {
                        return false;
                    }
                    counter++;
                }
            }
        }
        return true;
    }
};
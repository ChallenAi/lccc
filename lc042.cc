#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int left, right, last_idx;
    vector<int> height;
    int current_trapped;

    void move(bool isLeft, int idx) {
        for (; isLeft ? idx < last_idx : idx >= 0; isLeft ? idx++ : --idx) {
            if (height[idx] > min(height[left], height[right])) {
                if (isLeft) {
                    calculate_trapped(left, idx);
                    left = idx;
                } else {
                    calculate_trapped(idx, right);
                    right = idx;
                }
            }
        }
    }

    void calculate_trapped(int start, int end) {
        int limit = min(height[start], height[end]);
        for (int i = start+1; i < end; ++i) {
            int val = limit - height[i];
            if (val > 0) {
                current_trapped += val;
            }
        }
    }
public:
    int trap(vector<int>& height) {
        current_trapped = 0;
        this->height = height;
        last_idx = height.size() -1;

        for (left = 0; left < last_idx; ++left) {
            if (height[left] != 0) {
                break;
            }
        }
        if (left == last_idx) {
            return 0;
        }
        for (right = last_idx; right >= 0; --right) {
            if (height[right] != 0) {
                break;
            }
        }

        while (left < right)
        {
            if (height[left] > height[right]) {
                move(false, right);
            } else {
                move(true, left);
            }
        }

        return current_trapped;
    }
};
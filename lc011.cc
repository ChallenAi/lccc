#include <vector>
#include <iostream>

using namespace std;

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         // if left move right => right's height must higher than left ~
//         // int left = 0;
//         // int right = height.size();
//         int max_area = 0;

//         int left_height = height[0];
//         int right_height = height[height.size() - 1];

//         for (int i = 0; i < height.size(); i++) {
//             if (height[i] > left_height || i == 0) {

//                 std::cout << height << std::endl;
//                 // move left
//                 for (int i_right = height.size() - 1; i_right > i; i--) {
//                     if (height[i_right] > right_height || i_right == height.size()-1) {
//                         int new_area = min(height[i_right], height[i]) * (i_right - i);
//                         if (new_area > max_area) {
//                             max_area = new_area;
//                         }
//                     }
//                 }
//             }
//         }
//         return max_area;
//     }
// };

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int left = 0;
//         int right = height.size() - 1;
//         int max_area = right * min(height[left], height[right]);

//         bool finish_left = false;
//         bool finish_right = false;

//         while ((finish_left && finish_right) || left >= right) {
//             int left_ = getLeftNextHigher(height, left, right);
//             int right_ = getRightNextHigher(height, right, left);
//             if (left_ > 0 && right_ > 0) {
//                 if (height[left] < height[right]) {
//                     right = right_;
//                 } else {
//                     left = left_;
//                 }
//                 int new_area = min(height[left], height[right]) * (right - left);
//                 if (new_area > max_area) {
//                     max_area = new_area;
//                 }
//             } else if (left_ > 0) {
//                 finish_left = true;
//                 left = left_;
//                 int new_area = min(height[left], height[right]) * (right - left);
//                 if (new_area > max_area) {
//                     max_area = new_area;
//                 }
//             } else if (right_ > 0)
//             {
//                 finish_right = true;
//                 right = right_;
//                 int new_area = min(height[left], height[right]) * (right - left);
//                 if (new_area > max_area) {
//                     max_area = new_area;
//                 }
//             }
            
//         }

//         return max_area;
//     }

//     // find 
//     int getLeftNextHigher(vector<int>& height, int start, int end) {
//         int current_height = height[start];
//         while (start < end)
//         {
//             if (height[start] > current_height) {
//                 return start;
//             }
//             start++;
//         }

//         return -1;
//     }

//     int getRightNextHigher(vector<int>& height, int start, int end) {
//         int current_height = height[start];
//         while (start > end)
//         {
//             if (height[start] > current_height) {
//                 return start;
//             }
//             start++;
//         }

//         return -1;
//     }
// };

class Solution {
public:
    int maxArea(vector<int>& height) {
        // if () {}
        int left = 0;
        int right = height.size() - 1;
        int max_area = (right - left) * min(height[left], height[right]);
        
        while (left < right)
        {
            if (height[left] < height[right]) {
                // move left to update max_area;
                int new_left = findNext(height, left, right);
                if (new_left > 0) {
                    left = new_left;
                    int new_area = (right - left) * min(height[left], height[right]);
                    if (new_area > max_area) {
                        max_area = new_area;
                    }
                } else {
                    return max_area;
                }
                
            } else
            {
                // move right
                int new_right = findNext(height, left, right);
                if (new_right > 0) {
                    right = new_right;
                    int new_area = (right - left) * min(height[left], height[right]);
                    if (new_area > max_area) {
                        max_area = new_area;
                    }
                } else {
                    return max_area;
                }
            }
        }

        return max_area;
    }

    int findNext(vector<int>& height, int left, int right) {
        if (height[left] < height[right]) {
            // move left
            for (int i = left; i < right; ++i) {
                if (height[i] > height[left]) {
                    return i;
                }
            }
        } else {
            for (int i = right; i > left; --i) {
                if (height[i] > height[right]) {
                    return i;
                }
            }
        }

        return -1;
    }
};
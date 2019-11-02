#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int offset = nums1.size() - m;
        for (int i = m-1; i >= 0; --i) {
            nums1[i+offset] = nums1[i];
        }
        int n1_ptr = m;
        int n2_ptr = 0;
        int left = -1;
        while (n1_ptr < nums1.size() || n2_ptr < n) {
            left++;
            if (n1_ptr < nums1.size() && n2_ptr < n) {
                if (nums1[n1_ptr] < nums2[n2_ptr]) {
                    nums1[left] = nums1[n1_ptr];
                    n1_ptr++;
                } else {
                    nums1[left] = nums2[n2_ptr];
                    n2_ptr++;
                }
            } else if (n1_ptr < nums1.size()) {
                nums1[left] = nums1[n1_ptr];
                n1_ptr++;
            } else {
                nums1[left] = nums2[n2_ptr];
                n2_ptr++;
            }
        }
        return;
    }
};
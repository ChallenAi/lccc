#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        bool twoMid = (nums1.size() + nums2.size())%2 == 0;
        int midIdx1 = (nums1.size() + nums2.size() - 1)/2;
        double midVal;

        int ptr1 = 0, ptr2 = 0;
        int cnt = 0;
        while (ptr1 < nums1.size() || ptr2 < nums2.size())
        {
            if (cnt == midIdx1) {
                if (nums1[ptr1] < nums2[ptr2]) {
                    midVal = nums1[ptr1];
                    ptr1++;
                } else {
                    midVal = nums2[ptr2];
                    ptr2++;
                }

                if (twoMid) {
                    if (ptr1 >= nums1.size()) {
                        midVal = (nums2[ptr2] + midVal) / 2;
                    } else if (ptr2 < nums2.size()) {
                        midVal = (nums1[ptr1] + midVal) / 2;
                    } else if (nums1[ptr1] < nums2[ptr2]) {
                        midVal = (nums1[ptr1] + midVal) / 2;
                    } else {
                        midVal = (nums2[ptr2] + midVal) / 2;
                    }
                }
                
                return midVal;
            }
            if (nums1[ptr1] < nums2[ptr2]) {
                ptr1++;
            } else {
                ptr2++;
            }
            cnt++;
        }
        
        return 0.0f;
    }
};
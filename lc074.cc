#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int mid, target;
    vector<int> arr;
    int binSearch(int left, int right) {
        mid = (left + right)/2;
        if (target == arr[mid]) {
            return mid;
        } else if (target > arr[mid]) {
            if (mid == right) {
                return mid;
            }
            return binSearch(mid+1, right);
        } else {
            if (mid == left) {
                return mid;
            }
            return binSearch(left, mid-1);
        }
    }
public:
    bool searchMatrix(const vector<vector<int> >& matrix, int target) {
        this->target = target;
        arr = vector<int>();
        for (int i = 0; i < matrix.size(); ++i) {
            arr.push_back(matrix[i][0]);
        }
        int row_idx = binSearch(0, arr.size() -1);
        arr = matrix[row_idx];
        
        int col_idx = binSearch(0, arr.size() -1);

        return matrix[row_idx][col_idx] == target;
    }
};
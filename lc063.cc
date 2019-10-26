#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<vector<int> > matrix;
    int counter;
    int range_m, range_n;

    void handleNext(int current_m, int current_n) {
        if (current_m == range_m && current_n == range_n) {
            counter++;
        }
        if (current_m < range_m && matrix[current_m+1][current_n] != 1) {
            handleNext(current_m+1, current_n);
        }
        if (current_n < range_n && matrix[current_m][current_n+1] != 1) {
            handleNext(current_m, current_n+1);
        }
    }
public:
    int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid) {
        this->matrix = obstacleGrid;
        this->counter = 0;
        this->range_m = matrix[0].size() -1;
        this->range_n = matrix.size() -1;
        handleNext(0, 0);

        return counter;
    }
};
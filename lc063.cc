#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<vector<int> > matrix;
    
    int counter;
    void handleNext(int current_m, int current_n) {
        if (current_m == matrix[0].size() && current_n == matrix.size()) {
            counter++;
        }
        if (current_m +1 <= matrix[0].size()) {
            handleNext(current_m+1, current_n);
        }
        if (current_n +1 <= matrix.size()) {
            handleNext(current_m, current_n+1);
        }
    }
public:
    int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid) {
        this->matrix = obstacleGrid;
        this->counter = 0;
        handleNext(1, 1);

        std::cout << counter << std::endl;

        return counter;
    }
};
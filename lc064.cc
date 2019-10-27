#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<vector<int> > grid;
    int m_max, n_max;
    int sum_min;
    int handleNext(int m, int n, int current_sum) {
        current_sum += grid[n][m];

        if (m < m_max) {
            return handleNext(m+1, n, current_sum);
        }

        if (n < n_max) {
            return handleNext(m, n+1, current_sum);
        }

        if (m == m_max && n == n_max && current_sum < sum_min) {
            sum_min = current_sum;
            return 0;
        }

        return current_sum;
    }
public:
    int minPathSum(vector<vector<int> >& grid) {
        this->grid = grid;
        sum_min = 9999999;
        m_max = grid[0].size() -1;
        n_max = grid.size() -1;
        
        handleNext(0, 0, 0);

        return sum_min;
    }
};
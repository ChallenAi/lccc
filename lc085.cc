#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximalRectangle(vector<vector<char> >& matrix) {
        int x_max = matrix[0].size() -1;
        int y_max = matrix.size() -1;

        for (int x = 0; x <= x_max; ++x) {
            for (int y = 0; y <= y_max; ++y) {
                std::cout << matrix[y][x] << std::endl;
            }
        }

        return 0;
    }
};
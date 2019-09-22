#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> resu;
    vector<vector<int> > matrix;
    void printLine(int x_start, int x_end, int y_start, int y_end) {
        if (x_start == x_end) {
            for (int i = y_start; i < y_end; y_start < y_end ? i++ : i--) {
                resu.push_back(matrix[x_start][i]);
                std::cout << matrix[x_start][i] << std::endl;
            }
        } else {
            for (int i = x_start; i < x_end; x_start < x_end ? i++ : i--) {
                resu.push_back(matrix[i][y_start]);
                std::cout << matrix[i][y_start] << std::endl;
            }
        }
    }
public:
    vector<int> spiralOrder(vector<vector<int> >& matrix) {
        this->matrix = matrix;
        int start[] = {0, 0};
        int width = matrix[0].size();
        int height = matrix.size();
        int end[] = {width -1, height -1};
        std::cout << start[0] << start[1] << end[0] << end[1] << std::endl; 
        std::cout << (start[0] < start[1] && end[0] < end[1]) << std::endl;
        std::cout << (end[0] < end[1]) << std::endl;
        while (start[0] < end[0] && start[1] < end[1])
        {           
            printLine(start[0], end[0]-1, start[1], start[1]); // top
            printLine(end[0], end[0], start[0], end[1]-1); // right
            printLine(end[0], start[0]+1, end[1], end[1]);
            printLine(start[0], start[0], end[1], start[1]-1);
            start[0]++;
            start[1]--;
            end[0]++;
            end[1]--;
        }

        return resu;
    }
};
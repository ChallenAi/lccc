#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> resu;
    vector<vector<int> > matrix;
    int width;
    int height;
    void printBorder(int layer_cnt) {
        int i;
        for (i = layer_cnt; i < width - layer_cnt-1; ++i) {
            resu.push_back(matrix[layer_cnt][i]);
        }

        for (i = layer_cnt; i < height - layer_cnt-1; ++i) {
            resu.push_back(matrix[i][width - layer_cnt -1]);
            // matrix.size() - layer_cnt -1
        }

        for (i = width - layer_cnt -1; i > layer_cnt; --i) {
            resu.push_back(matrix[height - layer_cnt -1][i]);
        }

        for (i = height - layer_cnt -1; i > layer_cnt; --i) {
            resu.push_back(matrix[i][layer_cnt]);
        }
    };
public:
    vector<int> spiralOrder(vector<vector<int> >& matrix) {
        this->matrix = matrix;
        width = matrix[0].size();
        height = matrix.size();

        int layer_cnt = 0;

        while (layer_cnt < min(width, height) - layer_cnt -1)
        {
            printBorder(layer_cnt);
            layer_cnt++;
        }
        
        return resu;
    }
};
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    vector<int> temp;
public:
    void rotate(vector<vector<int> >& matrix) {
        int n = matrix.size()-1;
        
        int layer_cnt = 0;
        int temp, i;
        while (layer_cnt < n - layer_cnt)
        {
            for (i = layer_cnt; i < n - layer_cnt; ++i) {
                temp = matrix[layer_cnt][i];
                matrix[layer_cnt][i] = matrix[i][n - layer_cnt];
                matrix[i][n - layer_cnt] = temp;
            }

            for (i = layer_cnt; i < n - layer_cnt; ++i) {
                temp = matrix[layer_cnt][i];
                matrix[layer_cnt][i] = matrix[n - layer_cnt][n - i];
                matrix[n - layer_cnt][n - i] = temp;
            }

            for (i = layer_cnt; i < n - layer_cnt; ++i) {
                temp = matrix[layer_cnt][i];
                matrix[layer_cnt][i] = matrix[n - i][layer_cnt];
                matrix[n - i][layer_cnt] = temp;
            }

            layer_cnt++;
            
        }

        return;
    }
};
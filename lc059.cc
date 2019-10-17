#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
private:
    vector<vector<int> > matrix;
    int len;
    int counter;
    int current_layer;
    void insert_layer() {
        std::cout << len << std::endl;
        std::cout << counter << std::endl;
        std::cout << current_layer << std::endl;
        for (int i = current_layer; i < len - 1 - current_layer; ++i) {
            matrix[current_layer][i] = counter;
            counter++;
        }

        for (int i = current_layer; i < len - 1 - current_layer; ++i) {
            matrix[i][len-1-current_layer] = counter;
            counter++;
        }
        
        for (int i = len-1-current_layer; i > current_layer; --i) {
            matrix[len - 1- current_layer][i] = counter;
            counter++;
        }

        for (int i = len-1-current_layer; i > current_layer; --i) {
            matrix[i][current_layer] = counter;
            counter++;
        } 
        return;
    }

    void padding_matrix() {
        vector<int> temp;
        for (int i = 0; i < len; ++i) {
            temp.push_back(0);
        }
        for (int i = 0; i < len; ++i) {
            matrix.push_back(temp);
        }
    }
public:
    vector<vector<int> > generateMatrix(int n) {
        this->len = n;
        current_layer = 0;
        counter = 1;

        padding_matrix();

        while (current_layer <= len - current_layer)
        {
            insert_layer();
            current_layer++;
        }
        
        return matrix;
    }
};
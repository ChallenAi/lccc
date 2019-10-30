#include <iostream>
#include <vector>

using namespace std;

// fuck the problem difficult to code :(
// jesus I will solve it the next day bye ~
class Solution {
private:
    string word;
    vector<vector<char> > matrix;
    bool resu;
    vector<vector<int> > curr;
    vector<int> current_pos;
    void searchChar() {
        current_pos = current[current.size()-1];
        // if (matrix[current_pos[0]+1])
        if (left) {
            current.push_back([left_pos]);
            searchChar();
            current.pop();
        }
        return;
    }
public:
    bool exist(vector<vector<char> >& board, string word) {
        if (word.length() == 0) {
            return true;
        }
        this->word = word;
        this->matrix = board;
        resu = false;

        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                if (matrix[i][j] == word.at(0)) {
                    int idxs[] = {i, j};
                    current.push_back(i, j);
                    searchChar();
                    current.pop();
                }
            }
        }
        return resu;
    }
};
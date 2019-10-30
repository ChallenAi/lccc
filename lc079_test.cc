#include <iostream>
#include <vector>
#include "lc079.cc"

int main(int argc, char const *argv[])
{
    char chars1_[] = { 'A', 'B', 'C', 'E' };
    char chars2_[] = { 'S', 'F', 'C', 'S' };
    char chars3_[] = { 'A', 'D', 'E', 'E' };
    vector<vector<char> > board;
    board.push_back(vector<char>(chars1_, chars1_+4));
    board.push_back(vector<char>(chars2_, chars2_+4));
    board.push_back(vector<char>(chars3_, chars3_+4));

    Solution s;
    bool resu1 = s.exist(board, "ABCCED");
    bool resu2 = s.exist(board, "SEE");
    bool resu3 = s.exist(board, "ABCB");

    if (resu1 && resu2 && !resu3) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
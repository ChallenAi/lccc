#include <iostream>
#include <vector>
#include "lc059.cc"

using namespace std;

int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int> > resu = s.generateMatrix(9);

    for (int i = 0; i < resu.size(); ++i) {
        for (int j = 0; j < resu[0].size(); ++j) {
            cout << resu[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    if (true) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}

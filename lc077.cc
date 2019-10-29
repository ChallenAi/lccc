#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int k, n;
    vector<vector<int> > resu;
    vector<int> curr;

    void recurse(int pos) {
        if (curr.size() >= k) {
            resu.push_back(curr);
            return;
        }
        for (int i = pos; i <= n; ++i) {
            curr.push_back(i);
            recurse(i+1);
            curr.pop_back();
        }
    }

public:
    vector<vector<int> > combine(int n, int k) {
        this->k = k;
        this->n = n;
        recurse(1);

        return resu;
    }
};
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    vector<TreeNode*> resu;
    vector<int> seqs;
    int n;
    void rec(int start) {
        if (seqs.size() >= n) {
            for (int i = 0; i < seqs.size(); i++) {
                std::cout << i << " ";
            }
            std::cout << std::endl;
            return;
        }
        for (int i = start; i <= n; ++i) {
            seqs.push_back(i);
            rec(i+1);
        }
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        this->n = n;
        rec(1);

        return resu;
    }
};
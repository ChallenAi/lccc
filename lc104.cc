#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    int recurse(TreeNode* t) {
        if (t == NULL) {
            return 0;
        }
        return max(recurse(t->left), recurse(t->right))+1;
    }
public:
    int maxDepth(TreeNode* root) {
        return recurse(root);
    }
};
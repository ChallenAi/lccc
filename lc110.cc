#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
private:
    int recurse(TreeNode* ptr) {
        if (ptr == NULL) {
            return 0;
        }
        return max(recurse(ptr->left), recurse(ptr->right))+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        int dif = recurse(root->left) - recurse(root->right);
        if (dif >= -1 && dif <= 1) {
            return isBalanced(root->left) && isBalanced(root->right);
        }
        return false;
    }
};
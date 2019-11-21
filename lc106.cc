// Construct Binary Tree from Preorder and Inorder Traversal
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    unordered_map<int, vector<int>::iterator> mapper;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.size() == 0 || preorder.size() != inorder.size()) {
            return NULL;
        }
        // get all iterator of preorder to compare
        for (int i = 0; i < inorder.size(); i++) {
            mapper[inorder[i]] = inorder.begin()+i;
        }
        TreeNode *resu, *ptr;
        resu = new TreeNode(preorder[0]);
        for (int i = 1; i < preorder.size(); ++i) {
            vector<int>::iterator it_curr = find(inorder.begin(), inorder.end(), preorder[i]);
            ptr = resu;
            for (int j = 0; j < i; ++j) {
                if (it_curr - mapper[preorder[j]] > 0) {
                    if (ptr->right != NULL) {
                        ptr = ptr->right;
                    } else {
                        ptr->right = new TreeNode(preorder[i]);
                        break;
                    }
                } else {
                    if (ptr->left != NULL) {
                        ptr = ptr->left;
                    } else {
                        ptr->left = new TreeNode(preorder[i]);
                        break;
                    }
                }
            }
        }
        return resu;
    }
};
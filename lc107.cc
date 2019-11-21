// Construct Binary Tree from Inorder and Postorder Traversal
#include <iostream>
#include <unordered_map>
#include <algorithm>
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
    unordered_map<int, vector<int>::iterator> map;
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (postorder.size() == 0 || postorder.size() != inorder.size()) {
            return NULL;
        }
        for (int i = 0; i < inorder.size(); i++) {
            map[inorder[i]] = inorder.begin()+i;
        }
        TreeNode *ptr, *resu;
        resu = new TreeNode(postorder[postorder.size()-1]);
        for (int i = postorder.size()-2; i >= 0; i--) {
            ptr = resu;
            vector<int>::iterator it = find(inorder.begin(), inorder.end(), postorder[i]);
            for (int j = postorder.size()-1; j > i; j--) {
                if (it - map[postorder[j]] > 0) {
                    if (ptr->right != NULL) {
                        ptr = ptr->right;
                    } else {
                        ptr->right = new TreeNode(postorder[i]);
                        break;
                    }
                } else {
                    if (ptr->left != NULL) {
                        ptr = ptr->left;
                    } else {
                        ptr->left = new TreeNode(postorder[i]);
                        break;
                    }
                }
            }
        }
        return resu;
    }
};

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
public:
    vector<int> resu;
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL) {
            return resu;
        }

        inorderTraversal(root->left);
        resu.push_back(root->val);
        inorderTraversal(root->right);

        return resu;
    }

    vector<int> inorderTraversal2(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* ptr = root;
        while (ptr != NULL || !s.empty()) {
            if (ptr != NULL) {
                s.push(ptr);
                ptr = ptr->left;
            } else {
                ptr = s.top();
                s.pop();
                std::cout << ptr->val << std::endl;
                ptr = ptr->right;
            }
        }

        return resu;      
    }
};
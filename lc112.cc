#include <iostream>
#include <queue>
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
    queue<TreeNode*> q;
    unordered_map<TreeNode*, int> mapper;
    TreeNode* ptr;
    int sum;
    bool ok;
    void recurse() {
        while (!q.empty())
        {
            ptr = q.front();
            q.pop();
            if (ptr->left == NULL && ptr->right == NULL) {
                // std::cout << ptr->val;
                if (mapper[ptr] == sum) {
                    ok = true;
                    return;
                }
            }
            if (ptr->left != NULL) {
                mapper[ptr->left] = mapper[ptr]+ptr->left->val;
                q.push(ptr->left);
            }
            if (ptr->right != NULL) {
                mapper[ptr->right] = mapper[ptr]+ptr->right->val;
                q.push(ptr->right);
            }
        }
    }
public:
    bool hasPathSum(TreeNode* root, int sum) {
        this->sum = sum;
        ok = false;
        q.push(root);
        mapper[root] = root->val;
        recurse();
        return ok;
    }
};
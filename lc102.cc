#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    int layer_cnt;
    vector<vector<int> > resu;
    queue<TreeNode*> curr;

    void recurse() {
        if (curr.empty()) {
            return;
        }
        layer_cnt = curr.size();
        vector<int> temp;
        while (layer_cnt > 0) {
            TreeNode* ptr = curr.front();
            curr.pop();
            temp.push_back(ptr->val);
            if (ptr->left != NULL) {
                curr.push(ptr->left);
            }
            if (ptr->right != NULL) {
                curr.push(ptr->right);
            }
            layer_cnt--;
        }
        resu.push_back(temp);
        recurse();
    }
    
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        curr.push(root);
        layer_cnt = 1;
        recurse();
        return resu;
    }
};
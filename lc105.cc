#include <iostream>
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
    vector<vector<int> > resu;
    queue<TreeNode*> cur;
    int layer_cnt;
    void recurse() {
        if (cur.empty()) {
            return;
        }
        vector<int> temp;
        layer_cnt = cur.size();
        while (layer_cnt--) {
            TreeNode* ptr = cur.front();
            cur.pop();
            temp.push_back(ptr->val);
            if (ptr->left != NULL) {
                cur.push(ptr->left);
            }
            if (ptr->right != NULL) {
                cur.push(ptr->right);
            }
        }
        resu.push_back(temp);
        recurse();
    }
public:
    vector<vector<int> > levelOrderBottom(TreeNode* root) {
        cur.push(root);
        recurse();
        reverse(resu.begin(), resu.end());
        return resu;
    }
};
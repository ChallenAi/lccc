#include <iostream>
#include <vector>
#include <list>

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
    list<TreeNode*> curr;
    void recurseLeftOrder() {
        if (curr.empty()) {
            return;
        }
        layer_cnt = curr.size();
        vector<int> temp;
        while (layer_cnt--) {
            TreeNode* ptr = curr.front();
            curr.pop_front();
            temp.push_back(ptr->val);
            if (ptr->left != NULL) {
                curr.push_back(ptr->left);
            }
            if (ptr->right != NULL) {
                curr.push_back(ptr->right);
            }
        }
        resu.push_back(temp);
        recurseRightOrder();
    }

    void recurseRightOrder() {
        if (curr.empty()) {
            return;
        }
        layer_cnt = curr.size();
        vector<int> temp;
        while (layer_cnt--) {
            TreeNode* ptr = curr.back();
            curr.pop_back();
            temp.push_back(ptr->val);
            if (ptr->right != NULL) {
                curr.push_front(ptr->right);
            }
            if (ptr->left != NULL) {
                curr.push_front(ptr->left);
            }
        }
        resu.push_back(temp);
        recurseLeftOrder();
    }
    
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        curr.push_back(root);
        layer_cnt = 1;
        recurseLeftOrder();
        return resu;
    }
};
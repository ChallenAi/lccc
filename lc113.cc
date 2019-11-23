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
    vector<vector<int> > resu;
    vector<int> curr;
    int current_sum, sum;
    void recurse(TreeNode* ptr) {
        if (ptr == NULL) {
            return;
        }
        current_sum += ptr->val;
        curr.push_back(ptr->val);
        if (ptr->left == NULL && ptr->right == NULL && current_sum == sum) {
            resu.push_back(curr);
        }
        recurse(ptr->left);
        recurse(ptr->right);
        curr.pop_back();
        current_sum -= ptr->val;
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        this->sum = sum;
        current_sum = 0;
        recurse(root);
        return resu;
    }
};
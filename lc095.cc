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
    vector<TreeNode*> resu;
    TreeNode* cur;
    void recurse(int left, int right, bool isLeft) {
        TreeNode* par;

        if (left > right) {
            return;
        }

        // for (int i = left; i <= right; ++i) {
        //     // carry left and right leaf here
        //     par = cur;
        //     if (isLeft) {
        //         cur->left = new TreeNode(i);
        //         cur = cur->left;
        //     } else {
        //         cur->right = new TreeNode(i);
        //         cur = cur->right;
        //     }
        //     recurse(left, i-1, true);
        //     recurse(i+1, right, false);
        //     // pop the state back;
        //     if (isLeft) {
        //         cur = par;
        //         cur->left = NULL;
        //     } else {
        //         cur = par;
        //         cur->right = NULL;
        //     }
        // }
        
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        int left = 1;
        int right = n;
        cur = new TreeNode(0);

        recurse(left, right, true);

        return resu;
    }
};
#include <iostream>
#include <algorithm>
#include <math.h>
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
    queue<TreeNode*> q;
    int depth_count;
    TreeNode* ptr;
    void recurse() {
        while (!q.empty()) {
            ptr = q.front();
            q.pop();
            if (ptr->left == NULL || ptr->right == NULL) {
                return;
            }
            q.push(ptr->left);
            q.push(ptr->right);
            depth_count++;
        }
    }
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        depth_count = 1;
        q.push(root);
        recurse();
        return depth_count;
    }
};

class Solution2 {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return min(minDepth(root->left), minDepth(root->right)) +1;
    }
};
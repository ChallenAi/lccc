#include <iostream>
#include <queue>
#include <vector>
#include "lc106.cc"

queue<TreeNode*> q;
int layer_cnt;

void travel() {
    if (q.empty()) {
        return;
    }
    layer_cnt = q.size();
    while (layer_cnt--) {
        TreeNode* ptr = q.front();
        q.pop();
        std::cout << ptr->val << " ";
        if (ptr->left != NULL) {
            q.push(ptr->left);
        }
        if (ptr->right != NULL) {
            q.push(ptr->right);
        }
    }
    travel();
}

int main(int argc, char const *argv[])
{
    vector<int> inorder = {9,3,15,20,7};
    vector<int> preorder = {3,9,20,15,7};

    Solution s;
    TreeNode* resu = s.buildTree(preorder, inorder);
    if (resu != NULL) {
        q.push(resu);
        travel();
    }

    if (resu != NULL) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
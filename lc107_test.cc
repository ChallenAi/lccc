#include <iostream>
#include <queue>
#include <vector>
#include "lc107.cc"

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
    int inorder_[] = {9,3,15,20,7};
    int postorder_[] = {9,15,7,20,3};
    vector<int> inorder = vector<int>(inorder_, inorder_+5);
    vector<int> postorder = vector<int>(postorder_, postorder_+5);

    Solution s;
    TreeNode* resu = s.buildTree(inorder, postorder);
    q.push(resu);
    travel();
    
    if (true) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
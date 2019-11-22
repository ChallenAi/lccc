#include <iostream>
#include "lc112.cc"

int main(int argc, char const *argv[])
{
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->right->right = new TreeNode(1);
    
    Solution s;
    bool resu = s.hasPathSum(root, 22);
    bool resu2 = s.hasPathSum(root, 26);
    bool resu3 = s.hasPathSum(root, 38);

    if (resu && resu2 && !resu3) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
}
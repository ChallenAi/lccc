#include <iostream>
#include "lc111.cc"

int main(int argc, char const *argv[])
{
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    
    Solution s;
    int resu = s.minDepth(root);

    if (resu == 2) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
}
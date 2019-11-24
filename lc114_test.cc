#include <iostream>
#include "lc114.cc"

int main(int argc, char const *argv[])
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(8);
    root->right->right->left = new TreeNode(9);
    root->right->right->right = new TreeNode(10);
    
    Solution s;
    s.flatten(root);

    bool pass = true;
    
    while (root != NULL)
    {
        // std::cout << root->val << std::endl;
        // std::cout << root->left << std::endl;
        // std::cout << root->right << std::endl;
        // if (root->left != NULL) {
        //     pass = false;
        //     // break;
        // }
        root = root->right;
    }
    

    if (pass) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
}
#include <iostream>
#include <vector>
#include "lc094.cc"

using namespace std;

int main(int argc, const char** argv) {
    TreeNode* root = new TreeNode(7);
    // 1, 2, 3, ,4, 5, 7, 8, 11, 12, 15, 18
    root->left = new TreeNode(4);
    root->right = new TreeNode(11);
    root->left->left = new TreeNode(2);
    root->left->left->left = new TreeNode(1);
    root->left->left->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(8);
    root->right->right = new TreeNode(15);
    root->right->right->left = new TreeNode(12);
    root->right->right->right = new TreeNode(18);
    
    Solution s;
    vector<int> resu = s.inorderTraversal2(root);
    
    bool pass = true;
    for (int i = 1; i < resu.size(); ++i) {
        if (resu[i] < resu[i-1]) {
            pass = false;
            break;
        }
    }

    if (pass) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
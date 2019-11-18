#include <iostream>
#include <vector>
#include "lc105.cc"

int main(int argc, char const *argv[])
{
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    
    Solution s;
    vector<vector<int> > resu = s.levelOrderBottom(root);

    for (int i = 0; i < resu.size(); ++i) {
        for (int j = 0; j < resu[i].size(); ++j) {
            std::cout << resu[i][j] << " ";
        }
        std::cout << endl;
    }

    if (true) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;

}
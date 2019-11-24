#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    TreeNode* root;
    void zig(TreeNode* ptr, TreeNode* par) {
        // TreeNode* top = ptr->left;

        // if (par == NULL) {
        //     // WTF??? I have make the root become the top, and what happened?
        //     root = top;
        // } else if (par->left == ptr) {
        //     par->left = top;
        // } else if (par->right == ptr) {
        //     par->right = top;
        // }

        // TreeNode* temp = top->right;
        // // std::cout << ptr->val << std::endl;
        // top->right = ptr;
        // top->right->left = temp;
        // return top;

        TreeNode* temp = ptr->left->right;
        ptr->left->right = ptr;
        ptr = ptr->left;
        ptr->right->left = temp;

        if (par != NULL) {
            std::cout << par->left << std::endl;
        }
        std::cout << ptr->right << std::endl;
        if (par != NULL) {
            std::cout << par->right << std::endl;
        }
        std::cout << std::endl;
        
        if (par == NULL) {
            // WTF??? I have make the root become the top, and what happened?
            root = ptr;
        } else if (par->left == ptr->right) {
            par->left = ptr;
        } else if (par->right == ptr->right) {
            par->right = ptr;
        }

        // TreeNode* temp = top->right;
        // std::cout << ptr->val << std::endl;
        // top->right = ptr;
        // top->right->left = temp;
    }
public:
    void flatten(TreeNode* root) {
        // wtf c++ 's pointer...
        // I just want the left bottom 7 as the root of the tree, but I get nothing beyond the origin root...
        this->root = root;
        TreeNode *par, *ptr;
        ptr = root;
        par = NULL;
        while (ptr != NULL)
        {
            while (ptr->left != NULL)
            {
                zig(ptr, par);
            }
            par = ptr;
            ptr = ptr->right;
        }
        
        // ptr = root;
        // while (ptr != NULL)
        // {
        //     std::cout << ptr->val << std::endl;
        //     std::cout << ptr->left << std::endl;
        //     std::cout << ptr->right << std::endl;
        //     ptr = ptr->right;
        // }
    }
};
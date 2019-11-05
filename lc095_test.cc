#include <iostream>
#include <vector>
#include <queue>
#include "lc095.cc"

using namespace std;

void serializePrintT(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);

    TreeNode* ptr;

    while (!q.empty()) {
        ptr = q.front();
        q.pop();
        if (ptr != NULL) {
            std::cout << ptr->val << " ";
            if (ptr->left != NULL || ptr->right != NULL) {
                q.push(ptr->left);
                q.push(ptr->right);
            }
        } else {
            std::cout << "NULL ";
        }
    }
}

int main(int argc, const char** argv) {
    Solution s;
    vector<TreeNode*> resu = s.generateTrees(3);

    for (int i = 0; i < resu.size(); ++i) {
        serializePrintT(resu[i]);
        std::cout << endl;
    }

    if (resu.size() == 5) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
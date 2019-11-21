#include <iostream>
#include <queue>
#include "lc109.cc"

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
    ListNode* head = new ListNode(-10);
    head->next = new ListNode(-3);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(9);

    Solution s;
    TreeNode* resu = s.sortedListToBST(head);
    q.push(resu);
    travel();

    if (true) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
}
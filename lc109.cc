#include <iostream>
#include <stack>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    queue<TreeNode*> q;
    ListNode *head, *ptr_l;
    TreeNode *resu, *ptr_t;
    stack<TreeNode*> s;

    void generateEmptyTree() {
        ptr_l = head->next;
        while (ptr_l != NULL && ptr_l->next != NULL)
        {
            ptr_t = q.front();
            q.pop();
            ptr_t->left = new TreeNode(0);
            ptr_t->right = new TreeNode(0);
            q.push(ptr_t->left);
            q.push(ptr_t->right);
            ptr_l = ptr_l->next->next;
        }
        if (ptr_l != NULL) {
            ptr_t = q.front();
            q.pop();
            ptr_t->left = new TreeNode(0);
        }
    }
    void insertIntoTree() {
        while (!s.empty() || ptr_t != NULL)
        {
            if (ptr_t != NULL) {
                s.push(ptr_t);
                ptr_t = ptr_t->left;
            } else {
                ptr_t = s.top();
                ptr_t->val = ptr_l->val;
                ptr_l = ptr_l->next;
                s.pop();
                ptr_t = ptr_t->right;
            }
        }
        
        // if (t->left != NULL) {
        //     ptr_t = t->left;
        //     insertIntoTree();
        // }
        // t->val = ptr_l->val;
        // ptr_l = ptr_l->next;
        // if (t->right != NULL) {
        //     ptr_t = t->right;
        //     insertIntoTree();
        // }
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        this->head = head;
        resu = new TreeNode(0);
        q.push(resu);
        generateEmptyTree();
        ptr_l = head;
        ptr_t = resu;
        insertIntoTree();

        return resu;
    }
};
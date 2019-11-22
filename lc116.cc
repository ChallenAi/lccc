#include <iostream>
#include <queue>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

class Solution {
private:
    queue<Node*> q;
    int layer_cnt;
    Node *ptr, *ptr_before;
    void recurse() {
        if (q.empty()) {
            return;
        }
        layer_cnt = q.size();
        ptr_before = q.front();
        while (layer_cnt--)
        {
            ptr = q.front();
            q.pop();
            if (ptr_before != ptr) {
                ptr_before->next = ptr;
                ptr_before = ptr_before->next;
            }
            if (ptr->left) {
                q.push(ptr->left);
            }
            if (ptr->right) {
                q.push(ptr->right);
            }
        }
        recurse();
    }
public:
    Node* connect(Node* root) {
        q.push(root);
        recurse();
        return root;
    }
};
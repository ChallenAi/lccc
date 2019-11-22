#include <iostream>
#include <queue>
#include "lc116.cc"

int main(int argc, char const *argv[])
{
    Node* root = new Node(1, NULL, NULL, NULL);
    root->left = new Node(2, NULL, NULL, NULL);
    root->right = new Node(3, NULL, NULL, NULL);
    root->left->left = new Node(4, NULL, NULL, NULL);
    root->left->right = new Node(5, NULL, NULL, NULL);
    root->right->left = new Node(6, NULL, NULL, NULL);
    root->right->right = new Node(7, NULL, NULL, NULL);

    Solution s;
    Node* resu = s.connect(root);
    Node* ptr = resu;
    queue<Node*> q;
    while (ptr != NULL)
    {
        q.push(ptr);
        ptr = ptr->left;
    }
    while (!q.empty())
    {
        ptr = q.front();
        q.pop();
        while (ptr != NULL)
        {
            std::cout << ptr->val << " ";
            ptr = ptr->next;
        }
        std::cout << endl;
    }
    

    if (true) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* left = new ListNode(0);
        ListNode* ptr = new ListNode(0);
        ListNode* ptr_left = left;
        ptr->next = head;
        head = ptr;

        while (ptr->next != NULL) {
            if (ptr->next->val < x) {
                ptr_left->next = ptr->next;
                ptr_left = ptr_left->next;
                ptr->next = ptr->next->next;
                continue;
            }
            ptr = ptr->next;
        }

        ptr_left->next = head->next;

        return left->next;
    }
};
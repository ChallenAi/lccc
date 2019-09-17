#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *resu = new ListNode(0);
        resu->next = head;
        ListNode *ptr = resu;
        while (ptr != NULL && ptr->next != NULL && ptr->next->next != NULL) {
            swapNextTwo(ptr);
            ptr = ptr->next->next;
        }
        return resu->next;
    }

    void swapNextTwo(ListNode* ptr) {
        ListNode *temp = ptr->next;
        ptr->next = ptr->next->next;
        temp->next = ptr->next->next;
        ptr->next->next = temp;
    }
};
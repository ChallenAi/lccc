#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr = head;
        while (ptr != NULL)
        {
            ListNode *inner_ptr = ptr;
            for (int i = 0; i <= n; ++i) {
                inner_ptr = inner_ptr->next;
            }
            if (inner_ptr == NULL) {
                ptr->next = ptr->next->next;
                return head;
            }

            ptr = ptr->next;
        }

        return head;        
    }
};
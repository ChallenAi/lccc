#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ptr, *ptr_before;
        ptr_before = new ListNode(0);
        ptr_before->next = head;
        head = ptr_before;
        ptr = head->next;
        bool need_del = false;
        
        while (ptr != NULL && ptr->next != NULL && ptr->next->next != NULL) {
            if (ptr->next->val == ptr->next->next->val) {
                ptr = ptr->next;
                need_del = true;
                continue;
            }
            if (need_del) {
                ptr_before->next->next = ptr->next->next;
                ptr = ptr_before->next;
                need_del = false;
                continue;
            }
            ptr_before = ptr;
            ptr = ptr->next;
        }
        
        return head->next;
    }
};
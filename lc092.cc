#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *ptr, *par;
        ptr = head;
        int counter = 1;
        
        while (ptr != NULL) {
            if (counter < m) {
                counter++;
                par = ptr;
                ptr = ptr->next;
            } else if (counter < n) {
                counter++;
                ListNode* temp = par->next;
                par->next = ptr->next;
                ptr->next = ptr->next->next;
                par->next->next = temp;
                // ptr = ptr->next;
            } else {
                break;
            }
        }

        return head;
    }
};
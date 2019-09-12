#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool plusOne = false;
        ListNode *ptr3, *l3;
        int resu_h = l1->val + l2->val;
        if (resu_h >= 10) {
            plusOne = true;
            resu_h -= 10;
        }
        l3 = new ListNode(resu_h);
        ptr3 = l3;
        l1 = l1->next;
        l2 = l2->next;
        while (l1 != NULL || l2 != NULL || plusOne)
        {
            if (l1 != NULL && l2 != NULL) {
                int resu = l1->val + l2->val;
                if (plusOne) {
                    resu++;
                    plusOne = false;
                }
                if (resu >= 10) {
                    plusOne = true;
                    resu -= 10;
                }
                ptr3->next = new ListNode(resu);
                ptr3 = ptr3->next;
                l1 = l1->next;
                l2 = l2->next;
            } else if (l1 != NULL || l2 != NULL) {
                int resu = l1 == NULL ? l2->val : l1->val;
                if (plusOne) {
                    resu++;
                    plusOne = false;
                }
                if (resu >= 10) {
                    plusOne = true;
                    resu -= 10;
                }

                ptr3->next = new ListNode(resu);
                ptr3 = ptr3->next;

                if (l1 != NULL) {
                    l1 = l1->next;
                } else {
                    l2 = l2->next;
                }
            } else {
                ptr3->next = new ListNode(1);
                plusOne = false;
                break;
            }
        }
        
        return l3;
    }
};
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *resu, *ptr;
        resu = new ListNode(0);
        ptr = resu;
        while (l1->next != NULL || l2->next != NULL)
        {
            if (l1 != NULL && l2 != NULL) {
                //  compare l1 and l2, get the small one 
                if (l1->val < l2->val) {
                    ptr->next = new ListNode(l1->val);
                    l1 = l1->next;
                } else
                {
                    ptr->next = new ListNode(l2->val);
                    l2 = l2->next;
                }
                
            } else if (l1 != NULL) {
                ptr->next = new ListNode(l1->val);
                l1 = l1->next;
            } else
            {
                ptr->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            ptr = ptr->next;
        }
        
        resu = resu->next;
        return resu;
    }
};
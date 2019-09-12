#include <iostream>
#include <vector>
#include <unordered_map>
#include "lc002.cc"

int main(int argc, char const *argv[])
{
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(9);
    l1->next->next->next = new ListNode(9);
    // l1->next->next->next->next = new ListNode(8);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution s;
    ListNode* l3 = s.addTwoNumbers(l1, l2);
    if (l3->val == 7 && l3->next->val == 0 && l3->next->next->val == 4 && l3->next->next->next->val == 0 && l3->next->next->next->next->val == 1 ) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }

    // ListNode *ptr3 = l3;
    // while (ptr3 != NULL)
    // {
    //     std::cout << ptr3->val << " ";
    //     ptr3 = ptr3->next;
    // }
    
    return 0;
}

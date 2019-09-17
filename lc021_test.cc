#include <iostream>
#include <vector>
#include "lc021.cc"

int main(int argc, char const *argv[])
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    ListNode *l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    Solution s;
    ListNode *new_head = s.mergeTwoLists(l1, l2);
    if (new_head->next->next->val == 2 && new_head->next->next->next->val == 3) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


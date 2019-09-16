#include <iostream>
#include <vector>
#include "lc019.cc"

int main(int argc, char const *argv[])
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution s;
    ListNode *new_head = s.removeNthFromEnd(head, 2);
    if (new_head->next->next->val == 3 && new_head->next->next->next->val == 5) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


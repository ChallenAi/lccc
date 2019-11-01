#include <iostream>
#include <vector>
#include "lc083.cc"

int main(int argc, char const *argv[])
{
    ListNode* head = new ListNode(1);
    ListNode* ptr = head;
    int nums_[] = { 3, 3, 3, 4, 4, 5 };
    for (int i = 0; i < sizeof(nums_) / sizeof(nums_[0]); ++i) {
        ptr->next = new ListNode(nums_[i]);
        ptr = ptr->next;
    }

    Solution s;
    ListNode* head_resu = s.deleteDuplicates(head);

    if (head_resu->val == 1 && head_resu->next->val == 3 && head_resu->next->next->val == 4) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include "lc024.cc"

int main(int argc, char const *argv[])
{
    bool pass = true;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);

    Solution s;
    ListNode *resu1 = s.swapPairs(head);
    int resu_[] = {2, 1, 4, 3, 6, 5, 7};
    vector<int> resu = vector<int>(resu_, resu_+7);
    ListNode *ptr = resu1;
    for (int i = 0; i < resu.size(); ++i) {
        if (resu[i] != ptr->val) {
            pass = false;
        }
        ptr = ptr->next;
    }

    // while (ptr != NULL)
    // {
    //     std::cout << ptr->val << std::endl;
    //     ptr = ptr->next;
    // }
    
    if (pass) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


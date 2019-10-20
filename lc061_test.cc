#include <iostream>
#include <vector>
#include "lc061.cc"

using namespace std;

int main(int argc, char const *argv[])
{
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(3);
    l1->next->next->next = new ListNode(4);
    l1->next->next->next->next = new ListNode(5);

    ListNode* l2 = new ListNode(0);
    l2->next = new ListNode(1);
    l2->next->next = new ListNode(2);

    Solution s;
    ListNode* resu1 = s.rotateRight(l1, 2);
    ListNode* resu2 = s.rotateRight(l2, 4);

    if (resu1->next->val == 5 && resu1->next->next->val == 1 && resu2->val == 2 && resu2->next->val == 0) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}

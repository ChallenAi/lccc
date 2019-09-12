#include <iostream>
#include "lc004.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    ListNode* l3 = s.addTwoNumbers(l1, l2);
    if (l3->val == 7) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}

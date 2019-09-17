#include <iostream>
#include <vector>
#include "lc025.cc"

int main(int argc, char const *argv[])
{
    bool pass = true;
    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    head2->next->next->next = new ListNode(4);
    head2->next->next->next->next = new ListNode(5);
    head2->next->next->next->next->next = new ListNode(6);
    head2->next->next->next->next->next->next = new ListNode(7);
    ListNode *head3 = new ListNode(1);
    head3->next = new ListNode(2);
    head3->next->next = new ListNode(3);
    head3->next->next->next = new ListNode(4);
    head3->next->next->next->next = new ListNode(5);
    head3->next->next->next->next->next = new ListNode(6);
    head3->next->next->next->next->next->next = new ListNode(7);
    ListNode *head4 = new ListNode(1);
    head4->next = new ListNode(2);
    head4->next->next = new ListNode(3);
    head4->next->next->next = new ListNode(4);
    head4->next->next->next->next = new ListNode(5);
    head4->next->next->next->next->next = new ListNode(6);
    head4->next->next->next->next->next->next = new ListNode(7);

    Solution s;
    ListNode *resu2 = s.reverseKGroup(head2, 2);
    ListNode *resu3 = s.reverseKGroup(head3, 3);
    ListNode *resu4 = s.reverseKGroup(head4, 4);
    int resu__2[] = {2, 1, 4, 3, 6, 5, 7};
    int resu__3[] = {3, 2, 1, 6, 5, 4, 7};
    int resu__4[] = {4, 3, 2, 1, 5, 6, 7};
    vector<int> resu_2 = vector<int>(resu__2, resu__2+7);
    vector<int> resu_3 = vector<int>(resu__3, resu__3+7);
    vector<int> resu_4 = vector<int>(resu__4, resu__4+7);

    ListNode *ptr2 = resu2;
    for (int i = 0; i < resu_2.size(); ++i) {
        if (resu_2[i] != ptr2->val) {
            pass = false;
        }
        ptr2 = ptr2->next;
    }
    ListNode *ptr3 = resu3;
    for (int i = 0; i < resu_3.size(); ++i) {
        if (resu_3[i] != ptr3->val) {
            pass = false;
        }
        ptr3 = ptr3->next;
    }
    ListNode *ptr4 = resu4;
    for (int i = 0; i < resu_4.size(); ++i) {
        if (resu_4[i] != ptr4->val) {
            pass = false;
        }
        ptr4 = ptr4->next;
    }

    // while (ptr3 != NULL)
    // {
    //     std::cout << ptr3->val << std::endl;
    //     ptr3 = ptr3->next;
    // }
    
    if (pass) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


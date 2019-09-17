#include <iostream>
#include <vector>
#include "lc023.cc"

int main(int argc, char const *argv[])
{
    bool pass = true;
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(5);

    ListNode *l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    ListNode *l3 = new ListNode(2);
    l3->next = new ListNode(6);

    vector<ListNode*> lists;
    lists.push_back(l1);
    lists.push_back(l2);
    lists.push_back(l3);

    Solution s;
    ListNode* resu1 = s.mergeKLists(lists);
    int resu__[] = {1,1,2,3,4,4,5,6};
    vector<int> resu_ = vector<int>(resu__, resu__+8);
    for (int i = 0; i < resu_.size(); ++i) {
        if (resu_[i] != resu1->val) {
            pass = false;
        }
        resu1 = resu1->next;
    }
    // while (resu1->next != NULL)
    // {
    //     std::cout << resu1->val << std::endl;
    //     resu1 = resu1->next;
    // }
    
    if (pass) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}


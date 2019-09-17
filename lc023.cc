#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *resu = new ListNode(0);
        ListNode *ptr = resu;
        while (lists.size() > 0)
        {
            int min_idx = 0;
            ListNode *min_node = lists[0];
            for (int i = 0; i < lists.size(); ++i) {
                if (lists[i]->val < min_node->val) {
                    min_node = lists[i];
                    min_idx = i;
                }
            }
            ptr->next = new ListNode(min_node->val);
            ptr = ptr->next;
            if (lists[min_idx]->next == NULL) {
                // delete current idx
                vector<ListNode*>::iterator iter = lists.begin();
                lists.erase(iter+min_idx);
            } else {
                lists[min_idx] = lists[min_idx]->next;
            }
        }

        resu = resu->next;
        return resu;
    }
};
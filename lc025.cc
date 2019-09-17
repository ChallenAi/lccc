#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        queue<ListNode*> qs;
        int cnt = 0;

        ListNode *resu;

        ListNode *ptr = head;
        ListNode *current_head;
        ListNode *tail = NULL;
        while (ptr != NULL)
        {
            if (cnt == 0) {
                current_head = ptr;
            }
            if (cnt == k-1) {
                ListNode *temp = ptr->next;
                ptr->next = NULL;
                qs.push(current_head);
                cnt = 0;
                ptr = temp;
                continue;
            }
            if (ptr->next == NULL) {
                tail = current_head;
            }
            ptr = ptr->next;
            cnt++;
        }

        ptr = NULL;

        while (!qs.empty())
        {
            current_head = reverseAll(qs.front());
            qs.pop();
            if (ptr != NULL) {
                ptr->next = current_head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
            } else {
                resu = current_head;
                ptr = current_head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
            }
        }

        ptr->next = tail;

        return resu;

    }

    ListNode* reverseAll(ListNode* sub_head) {
        ListNode *resu = new ListNode(0);

        stack<ListNode*> s;
        ListNode *ptr = sub_head;
        while (ptr != NULL)
        {
            s.push(ptr);
            ptr = ptr->next;
        }

        ptr = resu;

        while (!s.empty())
        {
            ptr->next = s.top();
            s.pop();
            ptr = ptr->next;
        }

        ptr->next = NULL;
        
        return resu->next;
    }
};
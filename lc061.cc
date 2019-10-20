#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL) {
            return NULL;
        }

        int len = 1;
        ListNode* ptr = head;

        while (ptr->next != NULL) {
            len++;
            ptr = ptr->next;
        }

        ptr->next = head;

        int target_pos = len - (k % len);

        int counter = 1;
        ptr = head;
        while (ptr != NULL)
        {
            if (counter == target_pos) {
                break;
            }
            ptr = ptr->next;
            counter++;
        }

        head = ptr->next;
        ptr->next = NULL;
        
        return head;
    }
};
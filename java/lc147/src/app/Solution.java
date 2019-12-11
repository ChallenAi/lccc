package app;

class Solution {
    public ListNode insertionSortList(ListNode head) {
        ListNode ptr = head.next;
        ListNode innerPtr;
        
        while (ptr != null) {
            ListNode temp = ptr.next;
            innerPtr = head;
            if (ptr.val < innerPtr.val) {
                ptr.next = head;
                head = ptr;
                continue;
            }
            while (innerPtr != null) {
                if (ptr.val > innerPtr.val && (innerPtr.next == null || ptr.val < innerPtr.next.val)) {
                    ptr.next = innerPtr.next;
                    innerPtr.next = ptr;
                    break;
                }
                innerPtr = innerPtr.next;
            }
            ptr = temp;
        }

        return head;
    }
}
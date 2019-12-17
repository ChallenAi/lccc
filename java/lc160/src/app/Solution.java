package app;

public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode ref, ptr, ptrSkip;
        ptr = headA;
        while (ptr.next != null) {
            ptr = ptr.next;
        }
        ref = ptr;
        ref.next = headB;
        
        ptr = headA.next;
        ptrSkip = headA.next.next;
        while (true) {
            if (ptr == ptrSkip) {
                break;
            }
            ptrSkip = ptrSkip.next.next;
            ptr = ptr.next;
        }
        ptr = headA;
        while (true) {
            if (ptr == ptrSkip) {
                break;
            }
            ptr = ptr.next;
            ptrSkip = ptrSkip.next;
        }
        ref.next = null;
        return ptr;
    }
}
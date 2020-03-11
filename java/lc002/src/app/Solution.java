package app;

class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode resu =  new ListNode(0);
        ListNode ptr1 = l1;
        ListNode ptr2 = l2;
        ListNode ptr3 = resu;
        boolean needAddOne = false;
        int val;
        while (ptr1 != null || ptr2 != null) {
            if (ptr1 == null) {
                val = ptr2.val;
                if (needAddOne) {
                    val++;
                    needAddOne = false;
                }
                ptr2 = ptr2.next;
            } else if (ptr2 == null) {
                val = ptr1.val;
                if (needAddOne) {
                    val++;
                    needAddOne = false;
                }
                ptr1 = ptr1.next;
            } else {
                val = ptr1.val + ptr2.val;
                if (needAddOne) {
                    val++;
                }
                if (val > 9) {
                    needAddOne = true;
                    val -= 10;
                }
                ptr1 = ptr1.next;
                ptr2 = ptr2.next;
            }
            ptr3.next = new ListNode(val);
            ptr3 = ptr3.next;
        }

        return resu.next;
    }
}
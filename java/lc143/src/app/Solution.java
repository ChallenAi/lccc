package app;

import java.util.LinkedList;

class Solution {
    private LinkedList<ListNode> ll = new LinkedList<>();
    public void reorderList(ListNode head) {
        ListNode ptr = head;
        while (ptr != null) {
            ll.add(ptr);
            ptr = ptr.next;
        }
        head = new ListNode(0);
        ptr = head;
        while (ll.size() >= 2) {
            ptr.next = ll.removeFirst();
            ptr.next.next = ll.removeLast();
            ptr = ptr.next.next;
        }
        if (!ll.isEmpty()) {
            ptr.next = ll.removeLast();
            ptr = ptr.next;
        }
        ptr.next = null;
        head = head.next;
    }
}
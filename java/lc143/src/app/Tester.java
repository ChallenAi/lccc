package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        ListNode ll = new ListNode(1);
        ll.next = new ListNode(2);
        ll.next.next = new ListNode(3);
        ll.next.next.next = new ListNode(4);
        ll.next.next.next.next = new ListNode(5);
        ll.next.next.next.next.next = new ListNode(6);
        ll.next.next.next.next.next.next = new ListNode(7);
        
        Solution s = new Solution();
        s.reorderList(ll);
        
        ListNode ptr = ll;
        while (ptr != null) {
            System.out.print(ptr.val + " ");
            ptr = ptr.next;
        }

        System.out.println("pass");
    }
}
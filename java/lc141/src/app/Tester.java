package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {

        ListNode head = new ListNode(3);
        head.next = new ListNode(2);
        head.next.next = new ListNode(0);
        head.next.next.next = new ListNode(-4);
        head.next.next.next.next = head.next;

        ListNode head2 = new ListNode(1);
        head2.next = new ListNode(2);
        head2.next.next = head2;

        ListNode head3 = new ListNode(1);

        Solution s = new Solution();

        boolean resu1 = s.hasCycle(head);
        boolean resu2 = s.hasCycle(head2);
        boolean resu3 = s.hasCycle(head3);

        if (resu1 && resu2 && !resu3) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        ListNode head = new ListNode(-1);
        head.next = new ListNode(5);
        head.next.next = new ListNode(3);
        head.next.next.next = new ListNode(4);
        head.next.next.next.next = new ListNode(0);

        Solution s = new Solution();
        ListNode resu = s.insertionSortList(head);
        while (resu != null) {
            System.out.print(resu.val + " ");
            resu = resu.next;
        }

        System.out.println("pass");
    }
}
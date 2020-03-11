package app;

public class Tester {
    public static void main(String[] args) throws Exception {
        ListNode l1 = new ListNode(2);
        l1.next = new ListNode(4);
        l1.next.next = new ListNode(3);

        ListNode l2 = new ListNode(5);
        l2.next = new ListNode(6);
        l2.next.next = new ListNode(4);

        Solution s = new Solution();
        
        ListNode resu = s.addTwoNumbers(l1, l2);

        // npe
        if (resu.val == 7 && resu.next.val == 0 && resu.next.next.val == 8) {
            System.out.println("ok");
        } else {
            System.out.println("false");
        }
    }
}
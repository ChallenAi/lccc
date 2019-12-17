package app;

public class Test {
    public static void main(String[] args) {
        ListNode common = new ListNode(8);
        common.next = new ListNode(4);
        common.next.next = new ListNode(5);
        
        ListNode headA = new ListNode(3);
        headA.next = new ListNode(1);
        headA.next.next = common;

        ListNode headB = new ListNode(2);
        headB.next = new ListNode(0);
        headB.next.next = new ListNode(1);
        headB.next.next.next = common;

        Solution s = new Solution();
        ListNode resu = s.getIntersectionNode(headA, headB);
        
        int sum = 0;
        while (resu != null) {
            sum += resu.val;
            resu = resu.next;
        }

        if (sum == 17) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
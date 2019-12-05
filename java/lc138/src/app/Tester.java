package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {

        Node ll = new Node(1, null, null);
        ll.next = new Node(2, null, null);
        ll.next.next = new Node(3, null, null);
        ll.random = ll.next.next;
        ll.next.random = ll;

        Solution s = new Solution();
        Node resu =  s.copyRandomList(ll);
        int sum = 0;
        Node ptr = resu;
        while (ptr != null) {
            sum += ptr.val;
            if (ptr.random != null) {
                sum += ptr.random.val;
            }
            ptr = ptr.next;
        }

        if (sum == 10) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
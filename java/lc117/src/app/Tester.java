package app;

import java.util.Queue;
import java.util.LinkedList;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        Node root = new Node(1, null, null, null);
        root.left = new Node(2, null, null, null);
        root.right = new Node(3, null, null, null);
        root.left.left = new Node(4, null, null, null);
        root.left.right = new Node(5, null, null, null);
        root.right.right = new Node(7, null, null, null);

        Solution s = new Solution();
        s.connect(root);

        Queue<Node> q = new LinkedList<>();
        Node ptr = root;
        while (ptr != null) {
            q.add(ptr);
            ptr = ptr.left;
        }
        while (!q.isEmpty()) {
            ptr = q.poll();
            while (ptr != null) {
                System.out.println(ptr.val);
                ptr = ptr.next;
            }
        }
        System.out.println("pass");
    }
}
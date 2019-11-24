package app;

import java.util.LinkedList;
import java.util.Queue;

class Solution {
    private Queue<Node> q;
    private int layer_cnt;
    private Node ptr;
    public Solution() {
        q = new LinkedList<Node>();
    }
    private void recurse() {
        if (q.isEmpty()) {
            return;
        }
        layer_cnt = q.size();
        while (layer_cnt > 0) {
            ptr = q.poll();
            if (layer_cnt > 1) {
                ptr.next = q.peek();
            }
            if (ptr.left != null) {
                q.add(ptr.left);
            }
            if (ptr.right != null) {
                q.add(ptr.right);
            }
            layer_cnt--;
        }
        recurse();
        return;
    }
    public Node connect(Node root) {
        if (root == null) {
            return null;
        }
        q.add(root);
        recurse();
        return null;
    }
}
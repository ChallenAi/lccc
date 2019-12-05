package app;

import java.util.HashMap;
import java.util.Map;

class Solution {
    public Node copyRandomList(Node head) {
        Map<Node, Node> mapper = new HashMap<>();
        if (head == null) {
            return null;
        }
        Node resu, ptr, ptr2;
        ptr2 = resu = new Node(head.val, null, null);
        ptr = head.next;
        mapper.put(head, resu);
        while (ptr != null) {
            ptr2.next = new Node(ptr.val, null, null);
            ptr2 = ptr2.next;
            mapper.put(ptr, ptr2);
            ptr = ptr.next;
        }

        ptr2 = resu;
        ptr = head;

        while (ptr != null) {
            ptr2.random = mapper.get(ptr.random);
            ptr = ptr.next;
            ptr2 = ptr2.next;
        }
        
        return resu;
    }
}
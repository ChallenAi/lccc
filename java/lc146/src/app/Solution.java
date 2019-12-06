package app;

import java.util.HashMap;

class LRUCache {
    private class RingNode {
        public int key;
        public int value;
        public RingNode next;
        public RingNode before;
        public RingNode(int _key, int _value, RingNode _next, RingNode _before) {
            key = _key;
            value = _value;
            next = _next;
            before = _before;
        }
    }
    private RingNode head;
    private HashMap<Integer, RingNode> mapper;
    final private int UNUSABLE_INT = -99999;

    public LRUCache(int capacity) {
        if (capacity == 0) {
            throw new Error("bad capacity");
        }

        head = new RingNode(UNUSABLE_INT, UNUSABLE_INT, head, head);
        capacity--;
        RingNode ptr = head;
        while (capacity > 0) {
            ptr.next = new RingNode(UNUSABLE_INT, UNUSABLE_INT, head, ptr);
            head.before = ptr.next;
            ptr = ptr.next;
            capacity--;
        }

        mapper = new HashMap<>();
    }

    private void empower(RingNode n) {
        n.before.next = n.next;
        n.next.before = n.before;

        n.before = head.before;
        head.before.next = n;
        n.next = head;
        head.before = n;
        head = n;
    }
    
    public int get(int key) {
        if (!mapper.containsKey(key)) {
            return -1;
        }
        empower(mapper.get(key));
        return mapper.get(key).value;
    }
    
    public void put(int key, int value) {
        if (!mapper.containsKey(key)) {
            mapper.remove(head.before.key);
            mapper.put(key, head.before);
            head = head.before;
            head.key = key;
            head.value = value;
            return;
        }
        mapper.get(key).key = key;
        mapper.get(key).value = value;
        empower(mapper.get(key));
    }
}
package app;

import java.util.Deque;
import java.util.LinkedList;

class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        Deque<Integer> q = new LinkedList<>();
        for (int i = 0; i < gas.length; ++i) {
            q.add(gas[i] - cost[i]);
        }
        int anchor = gas.length;
        while (q.peek() < 0) {
            Integer temp = q.pollFirst();
            q.addLast(temp);
            anchor++;
        }

        int gasStore = q.pollLast();
        int right = anchor;
        
        while (!q.isEmpty() && gasStore+q.peekFirst() >= 0) {
            gasStore += q.pollFirst();
            right++;
        }
        
        while (!q.isEmpty() && gasStore+q.peekLast() >= 0) {
            gasStore += q.pollLast();
            anchor--;
        }

        anchor = anchor%gas.length;
        right = right%gas.length;

        if (q.isEmpty()) {
            return anchor;
        }
        if (anchor - right == 1 || (anchor - right == -1)) {
            return anchor;
        }
        return -1;
    }
}
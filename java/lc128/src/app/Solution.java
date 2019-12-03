package app;

import java.util.HashMap;
import java.util.Map;

class Solution {
    private Map<Integer, Integer> mapper;
    private int findRoot(int v) {
        while (v != mapper.get(v)) {
            v = mapper.get(v);
        }
        return v;
    }
    public int longestConsecutive(int[] nums) {
        mapper = new HashMap<>();
        Map<Integer, Integer> countMap = new HashMap<>();
        for (int el : nums) {
            if (mapper.containsKey(el -1) && mapper.containsKey(el +1)) {
                mapper.put(findRoot(el -1), el);
                mapper.put(findRoot(el +1), el);
                mapper.put(el, el);
            } else if (mapper.containsKey(el -1)) {
                mapper.put(el, mapper.get(el -1));
            } else if (mapper.containsKey(el +1)) {
                mapper.put(el, mapper.get(el +1));
            } else {
                mapper.put(el, el);
            }
        }
        for (int key : mapper.keySet()) {
            key = findRoot(key);
            if (countMap.containsKey(mapper.get(key))) {
                countMap.put(mapper.get(key), countMap.get(mapper.get(key))+1);
            } else {
                countMap.put(mapper.get(key), 1);
            }
        }
        int max = 1;
        for (int i : countMap.values()) {
            if (i > max) {
                max = i;
            }
        }
        return max;
    }
}
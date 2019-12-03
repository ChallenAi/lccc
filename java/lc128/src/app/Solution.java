package app;

import java.util.HashSet;
import java.util.Set;

// import java.util.HashMap;
// import java.util.Map;

// class Solution {
//     private Map<Integer, Integer> mapper;
//     private int findRoot(int v) {
//         while (v != mapper.get(v)) {
//             v = mapper.get(v);
//         }
//         return v;
//     }
//     public int longestConsecutive(int[] nums) {
//         mapper = new HashMap<>();
//         Map<Integer, Integer> countMap = new HashMap<>();
//         for (int el : nums) {
//             if (mapper.containsKey(el -1) && mapper.containsKey(el +1)) {
//                 mapper.put(findRoot(el -1), el);
//                 mapper.put(findRoot(el +1), el);
//                 mapper.put(el, el);
//             } else if (mapper.containsKey(el -1)) {
//                 mapper.put(el, mapper.get(el -1));
//             } else if (mapper.containsKey(el +1)) {
//                 mapper.put(el, mapper.get(el +1));
//             } else {
//                 mapper.put(el, el);
//             }
//         }
//         for (int key : mapper.keySet()) {
//             key = findRoot(key);
//             if (countMap.containsKey(mapper.get(key))) {
//                 countMap.put(mapper.get(key), countMap.get(mapper.get(key))+1);
//             } else {
//                 countMap.put(mapper.get(key), 1);
//             }
//         }
//         int max = 1;
//         for (int i : countMap.values()) {
//             if (i > max) {
//                 max = i;
//             }
//         }
//         return max;
//     }
// }

class Solution {
    public int longestConsecutive(int[] nums) {
        int resu = 0;
        if (nums.length == 0) {
            return resu;
        }
        // set.... awesome idea
        // even through we set iterator all the els, but we still stop with all the el consumed;
        Set<Integer> sets = new HashSet<>();
        for (int i : nums) {
            sets.add(i);
        }
        for (int i : nums) {
            int sum = 1;
            int left = i -1;
            int right = i +1;
            while (sets.remove(left--)) sum++;
            while (sets.remove(right++)) sum++;
            if (sum > resu) {
                resu = sum;
            }
            if (sets.isEmpty()) {
                break;
            }
        }

        return resu;
    }
}

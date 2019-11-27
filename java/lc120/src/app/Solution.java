package app;

import java.util.List;

class Solution {
    private List<List<Integer>> triangle;
    private int minimum, current_sum;
    private void recurse(int layer, int idx) {
        current_sum += triangle.get(layer).get(idx);
        if (layer == triangle.size()-1) {
            if (current_sum < minimum) {
                minimum = current_sum;
            }
            current_sum -= triangle.get(layer).get(idx);
            return;
        }
        recurse(layer+1, idx);
        recurse(layer+1, idx+1);
        current_sum -= triangle.get(layer).get(idx);
    }
    public int minimumTotal(List<List<Integer>> triangle) {
        this.triangle = triangle;
        minimum = 0;
        // for (List<Integer> el:triangle) {
        //     minimum += el.get(0);
        // }
        triangle.forEach(el -> minimum += el.get(0));
        recurse(0, 0);
        return minimum;
    }
}
package app;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
    private List<Integer> curr;
    private void recurse() {
        if (curr.size() == 1) {
            curr.add(1);
            return;
        }
        curr.add(1);
        for (int i = curr.size()-2; i > 0; i--) {
            curr.set(i, curr.get(i).intValue()+ curr.get(i-1).intValue());
        }
    }
    public List<Integer> getRow(int rowIndex) {
        curr = new ArrayList<>(Arrays.asList(1));
        while (rowIndex > 0) {
            recurse();
            rowIndex--;
        }
        return curr;
    }
}
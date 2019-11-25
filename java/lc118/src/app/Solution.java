package app;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
    private ArrayList<List<Integer>> resu;
    private void recurse() {
        if (resu.size() == 0) {
            resu.add(Arrays.asList(1));
            return;
        }
        if (resu.size() == 1) {
            resu.add(Arrays.asList(1, 1));
            return;
        }
        List<Integer> listBefore = resu.get(resu.size()-1);
        List<Integer> curr = new ArrayList<>(Arrays.asList(1));
        for (int i = 1; i < listBefore.size(); i++) {
            curr.add(listBefore.get(i).intValue()+ listBefore.get(i-1).intValue());
        }
        curr.add(1);
        resu.add(curr);
    }
    public List<List<Integer>> generate(int numRows) {
        resu = new ArrayList<>();
        while (numRows > 0) {
            recurse();
            numRows--;
        }
        return resu;
    }
}
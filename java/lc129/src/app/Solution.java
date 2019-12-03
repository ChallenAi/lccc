package app;

import java.util.ArrayList;

class Solution {
    int resu;
    private ArrayList<Integer> current;
    private void recurse(TreeNode t) {
        if (t == null) {
            return;
        }
        current.add(t.val);
        if (t.left == null && t.right == null) {
            for (int i = current.size()-1; i >= 0; i--) {
                resu += current.get(i)*Math.pow(10, current.size()-1-i);
            }
        }
        recurse(t.left);
        recurse(t.right);
        current.remove(current.size() -1);
    }
    public int sumNumbers(TreeNode root) {
        current = new ArrayList<>();
        resu = 0;
        recurse(root);
        return resu;
    }
}
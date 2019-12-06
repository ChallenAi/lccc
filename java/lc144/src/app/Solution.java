package app;

import java.util.LinkedList;
import java.util.List;
import java.util.Stack;

class Solution {
    private List<Integer> resu = new LinkedList<>();
    private void recurse(TreeNode t) {
        if (t == null) {
            return;
        }
        resu.add(t.val);
        recurse(t.left);
        recurse(t.right);
    }
    public List<Integer> preorderTraversal2(TreeNode root) {
        if (root == null) {
            return resu;
        }
        recurse(root);
        return resu;
    }

    private Stack<TreeNode> s = new Stack<>();
    public List<Integer> preorderTraversal(TreeNode root) {
        TreeNode ptr = root;
        while (ptr != null || !s.empty()) {
            if (ptr != null) {
                s.push(ptr);
                resu.add(ptr.val);
                ptr = ptr.left;
            } else {
                ptr = s.pop();
                ptr = ptr.right;
            }
        }
        return resu;
    }
}
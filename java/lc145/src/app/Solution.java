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
        recurse(t.left);
        recurse(t.right);
        resu.add(t.val);
    }
    public List<Integer> postorderTraversal(TreeNode root) {
        recurse(root);
        return resu;
    }

    // can only finish the 'trivial' recursive version postorder travel ....
    private Stack<TreeNode> s = new Stack<>();
    public List<Integer> postorderTraversal2(TreeNode root) {
        TreeNode ptr = root;
        s.add(root);
        // while (!s.empty()) {
            // ptr = s.peek();
            // if (ptr.right != null) {
            //     s.add(ptr.right);
            // }
            // if (ptr.left != null) {
            //     s.add(ptr.left);
            // }
            // if (ptr.left == null && ptr.right == null) {
            //     ptr = s.pop();
            // }
            // if (ptr != null) {
            //     s.add(ptr);
            //     ptr = ptr.left;
            // } else {
            //     ptr = s.pop();
            //     System.out.print(ptr.val + " ");
            //     ptr = ptr.right;
            // }
        // }
        return resu;
    }
}
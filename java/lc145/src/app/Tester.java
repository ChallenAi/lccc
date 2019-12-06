package app;

import java.util.List;

public class Tester {
    public static void main(String[] args) {

        TreeNode t = new TreeNode(1);
        t.left = new TreeNode(2);
        t.right = new TreeNode(3);
        t.left.left = new TreeNode(4);
        t.left.right = new TreeNode(5);
        t.right.left = new TreeNode(6);
        t.right.right = new TreeNode(7);

        Solution s = new Solution();
        List<Integer> resu = s.postorderTraversal(t);
        
        for (Integer el : resu) {
            System.out.print(el + " ");
        }

        System.out.println("pass");
    }
}
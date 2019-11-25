package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(2);
        root.right = new TreeNode(3);
        
        TreeNode root2 = new TreeNode(-10);
        root2.left = new TreeNode(9);
        root2.right = new TreeNode(20);
        root2.right.left = new TreeNode(15);
        root2.right.right = new TreeNode(7);

        Solution s = new Solution();
        int resu = s.maxPathSum(root);

        Solution s2 = new Solution();
        int resu2 = s2.maxPathSum(root2);
        
        if (resu == 6 && resu2 == 42) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
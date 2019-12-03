package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {

        TreeNode root1 = new TreeNode(1);
        root1.left = new TreeNode(2);
        root1.right = new TreeNode(3);
        
        TreeNode root2 = new TreeNode(4);
        root2.left = new TreeNode(9);
        root2.right = new TreeNode(0);
        root2.left.left = new TreeNode(5);
        root2.left.right = new TreeNode(1);

        Solution s = new Solution();
        int resu1 = s.sumNumbers(root1);
        int resu2 = s.sumNumbers(root2);

        if (resu1 == 25 && resu2 == 1026) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
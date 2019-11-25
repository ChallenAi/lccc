package app;

class Solution {
    private int maximum, currentSum;
    private void recurse(TreeNode ptr) {
        int temp;
        if (ptr == null) {
            return;
        }
        recurse(ptr.left);
        currentSum = Math.max(currentSum+ptr.val, 0);
        temp = currentSum;
        maximum = Math.max(maximum, currentSum);
        currentSum = 0;
        recurse(ptr.right);
        currentSum = Math.max(currentSum+temp, 0);
        maximum = Math.max(maximum, currentSum);
    }
    public int maxPathSum(TreeNode root) {
        maximum = root.val;
        currentSum = 0;
        recurse(root);
        // System.out.println(maximum);
        return maximum;
    }
}
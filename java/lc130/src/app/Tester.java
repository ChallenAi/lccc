package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        char[][] board = {
            {'X', 'X', 'X', 'X'},
            {'X', 'O', 'O', 'X'},
            {'X', 'X', 'O', 'X'},
            {'X', 'O', 'X', 'X'},
        };

        Solution s = new Solution();
        s.solve(board);

        for (char[] el : board) {
            for (char it : el) {
                System.out.print(it + " ");
            }
            System.out.println();
        }

        System.out.println("pass");
    }
}
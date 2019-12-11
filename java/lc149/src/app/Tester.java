package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        int[][] board1 = {
            {1, 1},
            {2, 2},
            {3, 3},
        };
        int[][] board2 = {
            {1, 1},
            {3, 2},
            {5, 3},
            {4, 1},
            {2, 3},
            {1, 4},
        };

        Solution s = new Solution();
        int resu1 = s.maxPoints(board1);
        int resu2 = s.maxPoints(board2);

        if (resu1 == 3 && resu2 == 4) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
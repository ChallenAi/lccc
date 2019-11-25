package app;

import java.util.List;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        Solution s = new Solution();
        List<Integer> resu = s.getRow(3);
        for (Integer num:resu) {
            System.out.print(num + " ");
        }

        System.out.println("pass");
    }
}
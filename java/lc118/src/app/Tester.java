package app;

import java.util.List;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        // List<List<Integer>> resuTarget = new ArrayList<>();

        Solution s = new Solution();
        List<List<Integer>> resu = s.generate(5);
        for (List<Integer> list:resu) {
            for (Integer num:list) {
                System.out.print(num + " ");
            }
            System.out.println();
        }

        System.out.println("pass");
    }
}
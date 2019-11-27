package app;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        List<List<Integer>> triangle = new ArrayList<>();
        triangle.add(new ArrayList<>(Arrays.asList(2)));
        triangle.add(new ArrayList<>(Arrays.asList(3, 4)));
        triangle.add(new ArrayList<>(Arrays.asList(6, 5, 7)));
        triangle.add(new ArrayList<>(Arrays.asList(4, 1, 8, 3)));

        Solution s = new Solution();
        int resu = s.minimumTotal(triangle);
        if (resu == 11) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        int[] gas = {1,2,3,4,5};
        int[] cost = {3,4,5,1,2};

        int[] gas2 = {1,2,3,4,5};
        int[] cost2 = {3,8,2,1,2};

        Solution s = new Solution();
        int resu1 = s.canCompleteCircuit(gas, cost);
        int resu2 = s.canCompleteCircuit(gas2, cost2);

        if (resu1 == 3 && resu2 == -1) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
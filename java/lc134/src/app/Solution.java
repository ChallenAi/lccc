package app;

class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int[] netIncome = new int[gas.length];
        for (int i = 0; i < gas.length; ++i) {
            netIncome[i] = gas[i] - cost[i];
        }
        System.out.println(netIncome);

        return 0;
    }
}
package app;

import java.lang.Math;

class Solution {
    private int[] prices;
    private int dp(int n, boolean isHold, int limit) {
        if (n == 0) {
            return isHold ? 0 - prices[0] : 0;
        }
        if (limit == 0) {
            return 0;
        }
        if (isHold) {
            return Math.max(dp(n-1, true, limit), dp(n-1, false, limit-1) - prices[n]);
        } else {
            return Math.max(dp(n-1, false, limit), dp(n-1, true, limit) + prices[n]);
        }
        // return isHold ? Math.max(dp(n-1, true, limit), dp(n-1, false, limit-1) - prices[n]) : Math.max(dp(n-1, false, limit), dp(n-1, true, limit) + prices[n]);
    }
    public int maxProfit(int[] prices) {
        this.prices = prices;
        return dp(prices.length-1, false, 2);
    }
}
package app;

import java.lang.Math;

class Solution {
    private int[] prices;
    private int dp(int n, boolean isHold) {
        if (n == 0) {
            return isHold ? 0 - prices[0] : 0;
        }
        return isHold ? Math.max(dp(n-1, true), dp(n-1, false) - prices[n]) : Math.max(dp(n-1, false), dp(n-1, true) + prices[n]);
    }
    public int maxProfit(int[] prices) {
        this.prices = prices;
        return dp(prices.length-1, false);
    }
}
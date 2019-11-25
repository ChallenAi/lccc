package app;

class Solution {
    private int[] dates = {0, 0};
    private int[] prices;
    private boolean movePtr() {
        int left = -1;
        int right = -1;
        for (int i = dates[0]+1; i < dates[1]; i++) {
            if (prices[i] < prices[dates[0]]) {
                left = i;
                break;
            }
        }
        for (int i = dates[1]-1; i > dates[0]; i--) {
            if (prices[i] > prices[dates[1]]) {
                right = i;
                break;
            }
        }
        if (left > 0 && right > 0) {
            if ((prices[dates[0]] - prices[left]) > (prices[right] - prices[dates[1]])) {
                dates[0] = left;
            } else {
                dates[1] = right;
            }
            return false;
        } else if (left > 0) {
            dates[0] = left;
            return false;
        } else if (right > 0) {
            dates[1] = right;
            return false;
        }
        return true;
    }
    public int maxProfit(int[] prices) {
        this.prices = prices;
        dates[1] = prices.length -1;
        while (dates[0] < dates[1]) {
            if (movePtr()) {
                break;
            }
        }
        int resu = prices[dates[1]] - prices[dates[0]];
        if (resu < 0) {
            return 0;
        }
        return resu;
    }
}
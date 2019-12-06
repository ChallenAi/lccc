package app;

class Solution {
    public int candy(int[] ratings) {
        int sum = 0;
        int[] candies = new int[ratings.length];
        candies[0] = 1;
        for (int i = 1; i < ratings.length; i++) {
            if (ratings[i] == ratings[i-1]) {
                if (i == ratings.length-1) {
                    candies[i] = 1;
                } else {
                    candies[i] = candies[i-1];
                }
            } else if (ratings[i] > ratings[i-1]) {
                candies[i] = candies[i-1]+1;
            } else {
                candies[i] = 1;
            }
        }
        for (int i = ratings.length-2; i >= 0; --i) {
            if (ratings[i] > ratings[i+1]) {
                candies[i] = Math.max(candies[i+1]+1, candies[i]);
            }
        }

        for (int el : candies) {
            sum += el;
        }
        
        return sum;
    }
}
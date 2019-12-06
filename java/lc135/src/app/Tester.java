package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        int[] ratings1 = {1,0,2,3,4,3,1,2,0,1,2,1,0};
        int[] ratings2 = {1,2,2};

        Solution s = new Solution();
        int resu1 = s.candy(ratings1);
        int resu2 = s.candy(ratings2);
        
        if (resu1 == 26 && resu2 == 4) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
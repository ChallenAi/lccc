package app;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        List<String> wordList = new ArrayList<>(Arrays.asList("hot","dot","dog","lot","log","cog"));
        String beginWord = "hit";
        String endWord = "cog";

        Solution s = new Solution();
        int resu = s.ladderLength(beginWord, endWord, wordList);

        if (resu == 5) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
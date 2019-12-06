package app;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {
        List<String> wordsDict = new LinkedList<>(Arrays.asList("cats", "dog", "sand", "and", "cat"));
        List<String> wordsDict2 = new LinkedList<>(Arrays.asList("apple", "pen"));

        Solution s = new Solution();
        boolean resu1 = s.wordBreak("catsandog", wordsDict);
        boolean resu2 = s.wordBreak("applepenapple", wordsDict2);

        if (!resu1 && resu2) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
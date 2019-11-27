package app;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {

        String beginWord = "hit";
        String endWord = "cog";
        List<String> wordsList = new ArrayList<String>(Arrays.asList("hot","dot","dog","lot","log","cog"));

        List<String> wordsList2 = new ArrayList<>(Arrays.asList("hot","dot","dog","lot","log"));

        Solution s = new Solution();
        List<List<String>> resu = s.findLadders(beginWord, endWord, wordsList);
        
        Solution s2 = new Solution();
        List<List<String>> resu2 = s2.findLadders(beginWord, endWord, wordsList2);

        if (resu.size() == 2 && resu2.size() == 0) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
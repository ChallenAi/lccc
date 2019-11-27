package app;

import java.nio.ReadOnlyBufferException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
    private List<List<String>> resu;
    private List<String> currentList;
    private List<String> wordList;
    private String endWord;
    private boolean transform(String a, String b) {
        if (a.length() != b.length() || a == b) {
            return false;
        }

        int counter = 0;
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) != b.charAt(i)) {
                counter++;
                if (counter > 1) {
                    return false;
                }
            }
        }

        return true;
    }
    private void recurse(String targetCmp) {
        if (targetCmp == endWord) {
            List<String> temp = new ArrayList<>();
            // resu.add(currentList.subList(0, currentList.size()-1));
            for (String el : currentList) {
                temp.add(el);
            }
            resu.add(temp);
            return;
        }
        for (int i = 0; i < wordList.size(); i++) {
            if (!currentList.contains(wordList.get(i)) && transform(targetCmp, wordList.get(i))) {
                currentList.add(wordList.get(i));
                recurse(wordList.get(i));
                currentList.remove(wordList.get(i));
            }
        }
    }
    public List<List<String>> findLadders(String beginWord, String endWord, List<String> wordList) {
        this.wordList = wordList;
        this.endWord = endWord;
        resu = new ArrayList<List<String>>();
        currentList = new ArrayList<String>(Arrays.asList(beginWord));
        recurse(beginWord);
        // System.out.println(resu.size());
        // shortest...
        resu.removeIf(row -> {
            for (int i = 0; i < row.size(); i++) {
                for (int j = i+2; j < row.size(); j++) {
                    if (transform(row.get(i), row.get(j))) {
                        return true;
                    }
                }
            }
            return false;
        });
        // for (List<String> el : resu) {
        //     for (String it : el) {
        //         System.out.print(it + " ");
        //     }
        //     System.out.println();
        // }
        return resu;
    }
}
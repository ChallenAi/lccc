package app;

import java.util.ArrayList;
import java.util.List;

class Solution {
    private List<String> wordList, currentList;
    private int currentLen;
    private String endWord;
    private boolean transform(String a, String b) {
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
    private void recurse(String target) {
        if (target == endWord) {
            if (currentLen > currentList.size()) {
                currentLen = currentList.size();
            }
            return;
        }
        for (int i = 0; i < wordList.size(); i++) {
            String temp = wordList.get(i);
            if (!currentList.contains(temp) && transform(temp, target)) {
                currentList.add(temp);
                recurse(temp);
                currentList.remove(temp);
            }
        }
    }
    public int ladderLength(String beginWord, String endWord, List<String> wordList) {
        this.wordList = wordList;
        this.endWord = endWord;
        currentList = new ArrayList<String>();
        currentList.add(beginWord);
        currentLen = wordList.size()+2;
        recurse(beginWord);
        return currentLen > wordList.size()+1 ? 0 : currentLen;
    }
}
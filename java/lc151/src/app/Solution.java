package app;

class Solution {
    public String reverseWords(String s) {
        String resu = "";
        s = s.trim();
        int end = s.length()-1;
        for (int i = s.length()-1; i >= 0; --i) {
            if (s.charAt(i) == ' ' && s.charAt(i+1) != ' ') {
                resu += s.substring(i+1, end+1) + " ";
            }
            if (s.charAt(i) != ' ' && (i == s.length()-1 || s.charAt(i+1) == ' ')) {
                end = i;
            }
        }
        resu += s.substring(0, end+1)+" ";
        return resu;
    }
}
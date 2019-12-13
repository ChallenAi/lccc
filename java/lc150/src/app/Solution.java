package app;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

// Todo ... i dnt know if it need to express "(2+3)*(3+5)"
class Solution {
    private Set<String> s = new HashSet<>();
    private int findNextNotation(String[] tokens, int start) {
        int notationIdx = -1;
        for (int i = start; i < tokens.length; ++i) {
            if (s.contains(tokens[i])) {
                notationIdx = i;
                break;
            }
        }
        return notationIdx;
    }
    public int evalRPN(String[] tokens) {
        s.addAll(Arrays.asList("+", "-", "*", "/"));

        int numIdx = -1, notationIdx = -1;
        notationIdx = findNextNotation(tokens, 0);
        numIdx = notationIdx-2;
        while (true) {
            switch (tokens[notationIdx]) {
                case "+":
                    tokens[notationIdx] = String.valueOf(Integer.valueOf(tokens[numIdx]) + Integer.valueOf(tokens[notationIdx-1]));
                    break;
                case "-":
                    tokens[notationIdx] = String.valueOf(Integer.valueOf(tokens[numIdx]) - Integer.valueOf(tokens[notationIdx-1]));
                    break;
                case "*":
                    tokens[notationIdx] = String.valueOf(Integer.valueOf(tokens[numIdx]) * Integer.valueOf(tokens[notationIdx-1]));
                    break;
                case "/":
                    tokens[notationIdx] = String.valueOf(Integer.valueOf(tokens[numIdx]) / Integer.valueOf(tokens[notationIdx-1]));
                    break;
                default:
                    break;
            }
            notationIdx = findNextNotation(tokens, notationIdx+1);
            if (notationIdx == -1) {
                break;
            }
            numIdx--;
        }
        // System.out.println(Integer.valueOf(tokens[notationIdx]));
        return Integer.valueOf(tokens[notationIdx]);
    }
}
package app;

import java.util.HashSet;
import java.util.Set;

class Solution {
    private Set<String> todos;
    private void recurse(int i, int j) {
        todos.remove(i + "_" + j);
        if (todos.contains(String.valueOf(i-1) + "_" + j)) {
            recurse(i-1, j);
        }
        if (todos.contains(String.valueOf(i+1) + "_" + j)) {
            recurse(i+1, j);
        }
        if (todos.contains(i + "_" + String.valueOf(j-1))) {
            recurse(i, j-1);
        }
        if (todos.contains(i + "_" + String.valueOf(j+1))) {
            recurse(i, j+1);
        }
    }
    public void solve(char[][] board) {
        todos = new HashSet<>();
        for (int i = 0; i < board.length; ++i) {
            for (int j = 0; j < board[i].length; ++j) {
                if (board[i][j] == 'O') {
                    todos.add(i + "_" + j);
                }
            }
        }
        System.out.println(todos.size());
        for (int i = 0; i < board.length; ++i) {
            for (int j = 0; j < board[0].length; ++j) {
                if (board[i][j] == 'O' && (i == 0 || i == board.length-1 || j == 0 || j == board[0].length-1)) {
                    recurse(i, j);
                }
            }
        }

        todos.forEach((i) -> {
            String[] ij = i.split("_");
            board[Integer.valueOf(ij[0])][Integer.valueOf(ij[1])] = 'X';
        });
    }
}
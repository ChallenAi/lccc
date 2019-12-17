package app;

import java.util.Stack;

class MinStack {
    // ues a linked list to store the data
    private Stack<Integer> s;
    
    public MinStack() {
        s = new Stack<>();
    }

    public void push(int x) {
        if (s.empty()) {
            s.push(x);
            s.push(x);
            return;
        }
        int min = x > s.peek() ? s.peek() : x;
        s.push(x);
        s.push(min);
    }

    public void pop() {
        s.pop();
        s.pop();
    }
    
    public int top() {
        Integer temp = s.pop();
        int resu = s.peek();
        s.push(temp);
        return resu;
    }
    
    public int getMin() {
        return s.peek();
    }
}
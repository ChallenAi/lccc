package app;

public class Tester {
    public static void main(String[] args) {

        MinStack ms = new MinStack();
        ms.push(1);
        ms.push(4);
        ms.push(2);
        int param3 = ms.top();
        int param4 = ms.getMin();
        ms.pop();

        if (param3 == 2 && param4 == 1) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
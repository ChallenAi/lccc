package app;

/**
 * Tester
 */
public class Tester {
    public static void main(String[] args) {

        boolean resu = true;

        LRUCache cache = new LRUCache(2);

        cache.put(1, 1);
        cache.put(2, 2);
        if (cache.get(1) != 1) resu = false;
        cache.put(3, 3);    // evicts key 2
        // cache.get(2);       // returns -1 (not found)
        if (cache.get(2) != -1) resu = false;
        cache.put(4, 5);    // evicts key 1
        if (cache.get(1) != -1) resu = false;
        if (cache.get(3) != 3) resu = false;
        if (cache.get(4) != 5) resu = false;

        if (resu) {
            System.out.println("pass");
        } else {
            System.out.println("not pass");
        }
    }
}
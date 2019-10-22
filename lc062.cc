#include <iostream>

using namespace std;

class Solution {
private:
    int m, n;
    int counter;
    void handleNext(int current_m, int current_n) {
        if (current_m == m && current_n == n) {
            counter++;
        }
        if (current_m +1 <= m) {
            handleNext(current_m+1, current_n);
        }
        if (current_n +1 <= n) {
            handleNext(current_m, current_n+1);
        }
    }
public:
    int uniquePaths(int m, int n) {
        this->m = m;
        this->n = n;
        this->counter = 0;
        handleNext(1, 1);

        return counter;
    }
};
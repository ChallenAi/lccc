#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
private:
    string resu;
    int k;
    vector<int> current;
    int caculateMulti(int n) {
        int sum = 1;
        for (int i = 1; i <= n; ++i) {
            sum *= i;
        }
        return sum;
    }

    void combineString() {
        if (current.size() == 0) {
            return;
        }
        for (int i = 0; i < current.size(); ++i) {
            if (k <= caculateMulti(current.size()-1)) {
                resu += to_string(current[i]);
                current.erase(current.begin()+i);
                combineString();
            } else {
                k -= caculateMulti(current.size()-1);
            }
        }
    }
public:
    string getPermutation(int n, int k) {
        if (n < 1) {
            return "";
        }

        this->k = k % caculateMulti(n);

        for (int i = 1; i <= n; ++i) {
            current.push_back(i);
        }

        resu = "";

        combineString();

        // std::cout << resu << std::endl;

        return resu;
    }
};
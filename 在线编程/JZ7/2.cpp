class Solution {
public:
    int Fibonacci(int n) {
        if (n <= 1) {
            return n;
        }

        int p = 0, q = 1;

        while (--n) {
            q += p;
            p = q - p;
        }

        return q;
    }
};
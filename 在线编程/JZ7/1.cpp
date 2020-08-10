class Solution {
public:
    int Fibonacci(int n) {
        if (n <= 1) {
            return n;
        }

        int p = 0, q = 1;

        for (int i = 1; i < n; i++) {
            int r = p + q;
            p = q;
            q = r;
        }

        return q;
    }
};
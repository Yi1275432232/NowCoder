class Solution {
public:
    double Power(double base, int exponent) {
        double answer = 1;
        int abs_exponent = abs(exponent);

        while (abs_exponent) {
            if (abs_exponent & 1) {
                answer *= base;
            }

            abs_exponent >>= 1;
            base *= base;
        }

        return exponent >= 0 ? answer : 1 / answer;
    }
};
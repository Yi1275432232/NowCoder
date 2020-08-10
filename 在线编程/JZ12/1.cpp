class Solution {
public:
    double Power(double base, int exponent) {
        double answer = 1;

        for (int i = 0; i < abs(exponent); i++) {
            answer *= base;
        }

        return exponent >= 0 ? answer : 1 / answer;
    }
};
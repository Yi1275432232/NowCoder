class Solution {
public:
    int Add(int num1, int num2) {
        while (num2) {
            int sum_without_carry = num1 ^ num2;
            int carry = (num1 & num2) << 1;
            num1 = sum_without_carry;
            num2 = carry;
        }

        return num1;
    }
};
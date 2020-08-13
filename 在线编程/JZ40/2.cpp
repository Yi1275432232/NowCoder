class Solution {
public:
    void FindNumsAppearOnce(vector<int> data, int *num1, int *num2) {
        int num1_xor_num2 = 0;

        for (auto &num : data) {
            num1_xor_num2 ^= num;
        }

        int flag = num1_xor_num2 & (-num1_xor_num2);
        *num1 = 0;
        *num2 = 0;

        for (auto &num : data) {
            if (num & flag) {
                *num1 ^= num;
            } else {
                *num2 ^= num;
            }
        }
    }
};
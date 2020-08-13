class Solution {
public:
    void FindNumsAppearOnce(vector<int> data, int *num1, int *num2) {
        int num1_xor_num2 = 0;

        for (auto &num : data) {
            num1_xor_num2 ^= num;
        }

        int first_1_index = find_first_1(num1_xor_num2);

        *num1 = 0;
        *num2 = 0;

        for (auto &num : data) {
            if (check_digit_is_1(num, first_1_index)) {
                *num1 ^= num;
            } else {
                *num2 ^= num;
            }
        }
    }

private:
    int find_first_1(int n) {
        int index = -1;

        while (n) {
            index++;

            if (n & 1) {
                break;
            }

            n >>= 1;
        }

        return index;
    }

    bool check_digit_is_1(int n, int index) {
        while (index--) {
            n >>= 1;
        }

        return n & 1;
    }
};
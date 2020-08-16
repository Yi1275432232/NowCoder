class Solution {
public:
    string LeftRotateString(string str, int n) {
        if (str.empty()) {
            return str;
        }

        int shit_number = n % str.size();

        my_reverse(str, 0, shit_number);
        my_reverse(str, shit_number, str.size());
        my_reverse(str, 0, str.size());

        return str;
    }

private:
    void my_reverse(string &str, int begin_index, int end_index) {
        if (begin_index >= end_index) {
            return;
        }

        for (int i = 0; i < (end_index - begin_index) / 2; i++) {
            str[begin_index + i] ^= str[end_index - 1 - i];
            str[end_index - 1 - i] ^= str[begin_index + i];
            str[begin_index + i] ^= str[end_index - 1 - i];
        }
    }
};
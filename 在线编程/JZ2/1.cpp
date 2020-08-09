class Solution {
public:
    void replaceSpace(char *str, int length) {
        int space_count = 0;

        for (int i = 0; i < length; i++) {
            if (str[i] == ' ') {
                space_count++;
            }
        }

        for (int j = length - 1; j >= 0; j--) {
            if (str[j] == ' ') {
                space_count--;
                str[j + 2 * space_count] = '%';
                str[j + 2 * space_count + 1] = '2';
                str[j + 2 * space_count + 2] = '0';
            } else {
                str[j + 2 * space_count] = str[j];
            }
        }
    }
};
class Solution {
public:
    string LeftRotateString(string str, int n) {
        int size = str.size();

        if (size == 0) {
            return str;
        }

        int shift_number = n % size;
        str += str;

        return str.substr(shift_number, size);
    }
};
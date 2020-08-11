class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int size = array.size();

        for (int i = 0; i < size - 1; i++) {
            bool is_sorted = true;

            for (int j = size - 1; j > i; j--) {
                if ((array[j] & 1) != 0 and (array[j - 1] & 1) == 0) {
                    swap(array[j], array[j - 1]);
                    is_sorted = false;
                }
            }

            if (is_sorted) {
                break;
            }
        }
    }
};
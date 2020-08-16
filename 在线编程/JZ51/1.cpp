class Solution {
public:
    vector<int> multiply(const vector<int> &A) {
        int size = A.size();
        vector<int> B(size);

        if (size <= 1) {
            return B;
        }

        int left[size], right[size];
        left[0] = 1, right[size - 1] = 1;

        for (int i = 1; i < size; i++) {
            left[i] = left[i - 1] * A[i - 1];
        }

        for (int j = size - 2; j >= 0; j--) {
            right[j] = right[j + 1] * A[j + 1];
        }

        for (int k = 0; k < size; k++) {
            B[k] = left[k] * right[k];
        }

        return B;
    }
};
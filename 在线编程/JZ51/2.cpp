class Solution {
public:
    vector<int> multiply(const vector<int> &A) {
        int size = A.size();
        vector<int> B(size);

        if (size <= 1) {
            return B;
        }

        B[0] = 1;

        for (int i = 1; i < size; i++) {
            B[i] = B[i - 1] * A[i - 1];
        }

        int carry = 1;

        for (int j = size - 2; j >= 0; j--) {
            carry *= A[j + 1];
            B[j] *= carry;
        }

        return B;
    }
};
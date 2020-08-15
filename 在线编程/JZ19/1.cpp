class Solution {
public:
    vector<int> printMatrix(vector<vector<int>> matrix) {
        vector<int> answer;

        if (matrix.empty() or matrix[0].empty()) {
            return answer;
        }

        int top = 0, left = 0, bottom = matrix.size() - 1, right = matrix[0].size() - 1;

        while (true) {
            for (int column = left; column <= right; column++) {
                answer.emplace_back(matrix[top][column]);
            }

            top++;

            if (top > bottom) {
                break;
            }

            for (int row = top; row <= bottom; row++) {
                answer.emplace_back(matrix[row][right]);
            }

            right--;

            if (left > right) {
                break;
            }

            for (int column = right; column >= left; column--) {
                answer.emplace_back(matrix[bottom][column]);
            }

            bottom--;

            if (top > bottom) {
                break;
            }

            for (int row = bottom; row >= top; row--) {
                answer.emplace_back(matrix[row][left]);
            }

            left++;

            if (left > right) {
                break;
            }
        }

        return answer;
    }
};
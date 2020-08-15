class Solution {
public:
    vector<int> printMatrix(vector<vector<int>> matrix) {
        vector<int> answer;

        if (matrix.empty() or matrix[0].empty()) {
            return answer;
        }

        int row_num = matrix.size(), column_num = matrix[0].size();

        int x_direction[] = {0, 1, 0, -1};
        int y_direction[] = {1, 0, -1, 0};

        int x = 0, y = 0, direction = 0;
        bool visited[row_num][column_num];
        memset(visited, false, sizeof(visited));

        while (x >= 0 and x < row_num and y >= 0 and y < column_num and !visited[x][y]) {
            answer.emplace_back(matrix[x][y]);
            visited[x][y] = true;

            while (x + x_direction[direction] >= 0 and x + x_direction[direction] < row_num and y + y_direction[direction] >= 0 and y + y_direction[direction] < column_num and !visited[x + x_direction[direction]][y + y_direction[direction]]) {
                x += x_direction[direction];
                y += y_direction[direction];
                answer.emplace_back(matrix[x][y]);
                visited[x][y] = true;
            }

            direction = (direction + 1) % 4;
            x += x_direction[direction];
            y += y_direction[direction];
        }

        return answer;
    }
};
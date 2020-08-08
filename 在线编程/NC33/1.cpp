class Solution {
public:
    /**
     * 远亲不如近邻
     * @param n int整型 居民个数
     * @param m int整型 方案个数
     * @param a int整型vector 居民的位置
     * @param x int整型vector 方案对应的位置
     * @return int整型vector
     */
    vector<int> solve(int n, int m, vector<int> &a, vector<int> &x) {
        // write code here
        vector<int> answer(m);
        sort(a.begin(), a.end());

        for (int i = 0; i < m; i++) {
            int left = 0, right = n - 1;
            int min_distance = INT_MAX;

            while (left <= right) {
                int middle = left + (right - left) / 2;

                min_distance = min(min_distance, abs(x[i] - a[middle]));

                if (a[middle] == x[i]) {
                    min_distance = 0;
                    break;
                } else if (a[middle] < x[i]) {
                    left = middle + 1;
                } else {
                    right = middle - 1;
                }
            }

            answer[i] = min_distance;
        }

        return answer;
    }
};
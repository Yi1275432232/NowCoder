class Solution {
public:
    /**
     * 算法交流群
     * @param n int整型 群员个数
     * @param a int整型vector 群员的等级
     * @param p int整型vector 群友寻求帮助的人
     * @param k int整型vector 群友产生的问题等级
     * @return int整型vector
     */
    vector<int> solve(int n, vector<int> &a, vector<int> &p, vector<int> &k) {
        // write code here
        vector<int> answer(n, 0);

        for (int i = 0; i < k.size(); i++) {
            int question_level = k[i];

            if (question_level > a[0]) {
                continue;
            } else if (question_level == a[0]) {
                answer[0]++;
                continue;
            } else {
                int helper_index = i;

                while (helper_index != 0 and question_level > a[helper_index]) {
                    helper_index = p[helper_index - 1] - 1;
                }

                if (question_level <= a[helper_index]) {
                    answer[helper_index]++;
                }
            }
        }

        return answer;
    }
};
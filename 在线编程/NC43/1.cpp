class Solution {
public:
    /**
     * 魔力转圈圈
     * @param n int整型 
     * @param m int整型 
     * @param l int整型vector 
     * @param r int整型vector 
     * @param k int整型vector 
     * @return int整型vector
     */
    vector<int> solve(int n, int m, vector<int> &l, vector<int> &r, vector<int> &k) {
        // write code here
        vector<int> answer;
        vector<int> count(n + 1, 0);

        for (auto &v : k) {
            count[v]++;
        }

        rotate(l, r, 1, count);

        in_order(l, r, 1, answer);

        return answer;
    }

private:
    void rotate(vector<int> &l, vector<int> &r, int node, vector<int> &count) {
        if (count[node] & 1) {
            swap(l[node - 1], r[node - 1]);
            count[l[node - 1]]++;
            count[r[node - 1]]++;
        }

        if (l[node - 1]) {
            rotate(l, r, l[node - 1], count);
        }

        if (r[node - 1]) {
            rotate(l, r, r[node - 1], count);
        }
    }

    void in_order(vector<int> &l, vector<int> &r, int node, vector<int> &answer) {
        if (l[node - 1]) {
            in_order(l, r, l[node - 1], answer);
        }

        answer.emplace_back(node);

        if (r[node - 1]) {
            in_order(l, r, r[node - 1], answer);
        }
    }
};
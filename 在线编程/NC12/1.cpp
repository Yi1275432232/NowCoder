class Solution {
public:
    /**
     * 
     * @param n int整型 只剩下一只蛋糕的时候是在第n天发生的．
     * @return int整型
     */
    int cakeNumber(int n) {
        // write code here
        int dp[n];
        dp[n - 1] = 1;
        n--;

        while (n >= 0) {
            dp[n] = (dp[n + 1] + 1) * 3 / 2;
            n--;
        }

        return dp[0];
    }
};
class Solution {
public:
    int jumpFloorII(int number) {
        if (number <= 0) {
            return 0;
        } else if (number <= 2) {
            return number;
        }

        vector<int> dp(number + 1, 0);
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= number; i++) {
            for (int j = 1; j < i; j++) {
                dp[i] += dp[i - j];
            }
            dp[i]++;
        }

        return dp[number];
    }
};
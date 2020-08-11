class Solution {
public:
    int Sum_Solution(int n) {
        int answer = n;
        (n > 0) and (answer += Sum_Solution(n - 1));

        return answer;
    }
};
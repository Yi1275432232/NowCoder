class Solution {
public:
    int NumberOf1(int n) {
        int answer = 0;

        while (n) {
            n &= n - 1;
            answer++;
        }

        return answer;
    }
};
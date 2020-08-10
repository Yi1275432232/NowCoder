class Solution {
public:
    int NumberOf1(int n) {
        int answer = 0;

        int i = 32;

        while (n and i--) {
            if (n & 0b01) {
                answer++;
            }

            n >>= 1;
        }

        return answer;
    }
};
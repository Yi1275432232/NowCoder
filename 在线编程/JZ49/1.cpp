class Solution {
public:
    int StrToInt(string str) {
        int answer = 0;

        if (str[0] == '+' or str[0] == '-' or (str[0] >= '0' and str[0] <= '9')) {
            for (int i = (str[0] == '+' or str[0] == '-') ? 1 : 0; i < str.size(); i++) {
                if (str[i] < '0' or str[i] > '9') {
                    return 0;
                } else {
                    answer = (answer << 1) + (answer << 3) + (str[i] & 0xf);
                }
            }

            if (str[0] == '-') {
                answer = -answer;
            }
        } else {
            return 0;
        }

        return answer;
    }
};
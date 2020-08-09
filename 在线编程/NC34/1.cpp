class Solution {
public:
    /**
     * 
     * @param s string字符串 
     * @return int整型
     */
    int solve(string s) {
        // write code here
        int answer = INT_MIN;

        vector<string> segments = hex_split(s);

        for (int i = 0; i < segments.size(); i++) {
            answer = max(answer, hex_to_decimal(segments[i]));
        }

        return answer;
    }

private:
    vector<string> hex_split(string s) {
        vector<string> segments;

        for (int i = 0; i < s.size(); i++) {
            if (!hex_check(s[i])) {
                continue;
            }

            int length = 1;

            for (int j = i + 1; j < s.size(); j++) {
                if (!hex_check(s[j])) {
                    break;
                }

                length++;
            }

            segments.emplace_back(s.substr(i, length));
            i += length - 1;
        }

        return segments;
    }

    bool hex_check(char c) {
        return (c >= '0' and c <= '9') or (c >= 'A' and c <= 'F');
    }

    int hex_to_decimal(string s) {
        int result = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            int digit = 0;

            if (s[i] >= '0' and s[i] <= '9') {
                digit = s[i] - '0';
            } else if (s[i] >= 'A' and s[i] <= 'F') {
                digit = s[i] - 'A' + 10;
            }

            result += digit * pow(16, s.size() - 1 - i);
        }

        return result;
    }
};
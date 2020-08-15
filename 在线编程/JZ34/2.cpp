class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        int char_count[128]{0};

        for (auto &ch : str) {
            char_count[ch]++;
        }

        for (int i = 0; i < str.size(); i++) {
            if (char_count[str[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};
#include <unordered_map>

class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        unordered_map<char, int> char_count;

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
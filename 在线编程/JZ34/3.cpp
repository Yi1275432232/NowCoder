class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        bitset<128> bs1, bs2;

        for (auto &ch : str) {
            if (bs1.test(ch)) {
                bs2.set(ch);
            } else {
                bs1.set(ch);
            }
        }

        for (int i = 0; i < str.size(); i++) {
            if (bs1.test(str[i]) and !bs2.test(str[i])) {
                return i;
            }
        }

        return -1;
    }
};
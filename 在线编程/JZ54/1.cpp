#include <unordered_map>

class Solution {
public:
    //Insert one char from stringstream
    void Insert(char ch) {
        str += ch;
        char_count[ch]++;
    }

    //return the first appearence once char in current stringstream
    char FirstAppearingOnce() {
        for (auto &ch : str) {
            if (char_count[ch] == 1) {
                return ch;
            }
        }

        return '#';
    }

private:
    string str;
    unordered_map<char, int> char_count;
};
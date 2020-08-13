#include <unordered_map>

class Solution {
public:
    void FindNumsAppearOnce(vector<int> data, int *num1, int *num2) {
        unordered_map<int, int> occurrence_count;

        for (auto &num : data) {
            occurrence_count[num]++;
        }

        vector<int> answer;

        for (auto &num : data) {
            if (occurrence_count[num] == 1) {
                answer.emplace_back(num);
            }
        }

        *num1 = answer[0];
        *num2 = answer[1];
    }
};
#include <unordered_set>

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array, int sum) {
        vector<int> answer;

        if (array.size() <= 1) {
            return answer;
        }

        unordered_set<int> visited;
        map<int, int> recorder;

        for (int i = 0; i < array.size(); i++) {
            if (visited.find(sum - array[i]) != visited.end()) {
                recorder.emplace(sum - array[i], array[i]);
            }

            visited.emplace(array[i]);
        }

        if (!recorder.empty()) {
            auto iter = recorder.begin();
            answer.emplace_back(iter->first);
            answer.emplace_back(iter->second);
        }

        return answer;
    }
};
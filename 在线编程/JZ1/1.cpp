class Solution {
public:
    bool Find(int target, vector<vector<int>> array) {
        for (int i = 0; i < array.size(); i++) {
            int left = 0, right = array[i].size() - 1;

            while (left <= right) {
                int middle = left + (right - left) / 2;

                if (array[i][middle] == target) {
                    return true;
                } else if (array[i][middle] < target) {
                    left = middle + 1;
                } else {
                    right = middle - 1;
                }
            }
        }

        return false;
    }
};
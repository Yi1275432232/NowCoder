class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array, int sum) {
        vector<int> answer;

        if (array.size() <= 1) {
            return answer;
        }

        int left = 0, right = array.size() - 1;

        while (left < right) {
            if (array[left] < sum - array[right]) {
                left++;
            } else if (array[left] > sum - array[right]) {
                right--;
            } else {
                answer.emplace_back(array[left]);
                answer.emplace_back(array[right]);
                break;
            }
        }

        return answer;
    }
};
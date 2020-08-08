class Solution {
public:
    /**
     * 
     * @param array int整型vector array
     * @return long长整型
     */
    long long IncreasingArray(vector<int> &array) {
        // write code here
        long long answer = 0;

        for (int i = 1; i < array.size(); i++) {
            if (array[i] < array[i - 1]) {
                answer += array[i - 1] - array[i] + 1;
            }
        }

        return answer;
    }
};
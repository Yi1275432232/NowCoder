class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int size = rotateArray.size();

        if (size == 0) {
            return 0;
        } else if (size == 1) {
            return rotateArray[0];
        }

        int left = 0, right = rotateArray.size() - 1;

        while (left <= right) {
            int middle = left + (right - left) / 2;

            if (rotateArray[middle] > rotateArray[right]) {
                left = middle + 1;
            } else if (rotateArray[middle] < rotateArray[right]) {
                right = middle;
            } else {
                right--;
            }
        }

        return rotateArray[left];
    }
};
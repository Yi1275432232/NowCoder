class Solution {
public:
    /**
     * 
     * @param number string字符串 
     * @return string字符串
     */
    string change(string number) {
        // write code here
        int left = 0, right = number.size() - 1;

        while (left < right) {
            while (left < right and (number[left] - '0') % 2 != 0) {
                left++;
            }

            while (left < right and (number[right] - '0') % 2 != 0) {
                right--;
            }

            swap(number[left++], number[right--]);
        }

        return number;
    }
};
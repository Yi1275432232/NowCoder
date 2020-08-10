class Solution {
public:
    int jumpFloor(int number) {
        if (number <= 0) {
            return 0;
        } else if (number <= 2) {
            return number;
        }

        return jumpFloor(number - 2) + jumpFloor(number - 1);
    }
};
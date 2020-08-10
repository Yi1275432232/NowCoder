class Solution {
public:
    int jumpFloorII(int number) {
        if (number <= 0) {
            return 0;
        } else if (number <= 2) {
            return number;
        }

        return 1 << (number - 1);
    }
};
class Solution {
public:
    int rectCover(int number) {
        if (number <= 0) {
            return 0;
        } else if (number <= 2) {
            return number;
        }
        
        int p = 1, q = 2;
        
        for (int i = 2; i < number; i++) {
            q += p;
            p = q - p;
        }
        
        return q;
    }
};
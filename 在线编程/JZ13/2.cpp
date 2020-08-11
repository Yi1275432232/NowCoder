class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int size = array.size();
        
        int sorted_count = 0;
        
        for (int i = 0; i < size; i++) {
            if (array[i] & 1) {
                int odd = array[i];
                
                for (int j = i; j > sorted_count; j--) {
                    array[j] = array[j - 1];
                }
                
                array[sorted_count++] = odd;
            }
        }
    }
};
class Solution {
public:
    bool IsPopOrder(vector<int> pushV, vector<int> popV) {
        stack<int> s;

        if (popV.empty()) {
            return true;
        }

        int j = 0;

        for (int i = 0; i < pushV.size(); i++) {
            s.emplace(pushV[i]);

            while (j < popV.size() and s.top() == popV[j]) {
                s.pop();
                j++;
            }
        }

        return s.empty();
    }
};
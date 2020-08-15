class Solution {
public:
    void push(int value) {
        s1.emplace(value);

        if (s2.empty()) {
            s2.emplace(value);
        } else {
            if (value <= s2.top()) {
                s2.emplace(value);
            } else {
                s2.emplace(s2.top());
            }
        }
    }

    void pop() {
        s1.pop();
        s2.pop();
    }

    int top() {
        return s1.top();
    }

    int min() {
        return s2.top();
    }

private:
    stack<int> s1, s2;
};
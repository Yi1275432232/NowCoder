class Solution {
public:
    void push(int node) {
        stack1.emplace(node);
    }

    int pop() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                int temp = stack1.top();
                stack1.pop();
                stack2.emplace(temp);
            }
        }

        int top = stack2.top();
        stack2.pop();

        return top;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
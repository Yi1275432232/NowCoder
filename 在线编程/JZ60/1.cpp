/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    vector<vector<int>> Print(TreeNode *pRoot) {
        vector<vector<int>> answer;

        if (!pRoot) {
            return answer;
        }

        queue<TreeNode *> q;
        q.emplace(pRoot);

        while (!q.empty()) {
            int size = q.size();
            vector<int> layer;

            for (int i = 0; i < size; i++) {
                TreeNode *node = q.front();
                q.pop();
                layer.emplace_back(node->val);

                if (node->left) {
                    q.emplace(node->left);
                }

                if (node->right) {
                    q.emplace(node->right);
                }
            }

            answer.emplace_back(layer);
        }

        return answer;
    }
};
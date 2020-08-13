/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode *root) {
        vector<int> answer;

        if (!root) {
            return answer;
        }

        queue<TreeNode *> q;
        q.emplace(root);

        while (!q.empty()) {
            TreeNode *node = q.front();
            q.pop();

            answer.emplace_back(node->val);

            if (node->left) {
                q.emplace(node->left);
            }

            if (node->right) {
                q.emplace(node->right);
            }
        }

        return answer;
    }
};
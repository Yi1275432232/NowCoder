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
    int TreeDepth(TreeNode *pRoot) {
        if (!pRoot) {
            return 0;
        }

        int answer = 0;
        queue<TreeNode *> q;
        q.emplace(pRoot);

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode *node = q.front();
                q.pop();

                if (node->left) {
                    q.emplace(node->left);
                }

                if (node->right) {
                    q.emplace(node->right);
                }
            }

            answer++;
        }

        return answer;
    }
};
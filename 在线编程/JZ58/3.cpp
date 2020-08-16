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
    bool isSymmetrical(TreeNode *pRoot) {
        if (!pRoot) {
            return true;
        }

        queue<TreeNode *> q;
        q.emplace(pRoot->left);
        q.emplace(pRoot->right);

        while (!q.empty()) {
            TreeNode *left = q.front();
            q.pop();
            TreeNode *right = q.front();
            q.pop();

            if (!left and !right) {
                continue;
            } else if (!left or !right) {
                return false;
            } else if (left->val != right->val) {
                return false;
            }

            q.emplace(left->left);
            q.emplace(right->right);
            q.emplace(left->right);
            q.emplace(right->left);
        }

        return true;
    }
};
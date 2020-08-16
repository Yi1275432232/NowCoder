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

        return helper(pRoot->left, pRoot->right);
    }

private:
    bool helper(TreeNode *left, TreeNode *right) {
        if (!left and !right) {
            return true;
        } else if (!left or !right) {
            return false;
        }

        return left->val == right->val and helper(left->left, right->right) and helper(left->right, right->left);
    }
};
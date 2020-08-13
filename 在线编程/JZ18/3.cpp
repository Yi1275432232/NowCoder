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
    void Mirror(TreeNode *pRoot) {
        post_order(pRoot);
    }

private:
    TreeNode *post_order(TreeNode *node) {
        if (!node) {
            return nullptr;
        }

        TreeNode *left = post_order(node->left);
        TreeNode *right = post_order(node->right);

        node->left = right;
        node->right = left;

        return node;
    }
};
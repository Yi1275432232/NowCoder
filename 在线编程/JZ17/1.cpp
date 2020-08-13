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
    bool HasSubtree(TreeNode *pRoot1, TreeNode *pRoot2) {
        if (!pRoot1 or !pRoot2) {
            return false;
        }

        return CheckSubtree(pRoot1, pRoot2) or CheckSubtree(pRoot1->left, pRoot2) or CheckSubtree(pRoot1->right, pRoot2);
    }

private:
    bool CheckSubtree(TreeNode *node1, TreeNode *node2) {
        if (!node2) {
            return true;
        } else if (!node1) {
            return false;
        } else if (node1->val == node2->val) {
            return CheckSubtree(node1->left, node2->left) and CheckSubtree(node1->right, node2->right);
        } else {
            return false;
        }
    }
};
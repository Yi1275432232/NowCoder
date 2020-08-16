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
        
        stack<TreeNode *> s;
        s.emplace(pRoot->left);
        s.emplace(pRoot->right);
        
        while (!s.empty()) {
            TreeNode *right = s.top();
            s.pop();
            TreeNode *left = s.top();
            s.pop();
            
            if (!left and !right) {
                continue;
            } else if (!left or !right) {
                return false;
            } else if (left->val != right->val) {
                return false;
            }
            
            s.emplace(left->left);
            s.emplace(right->right);
            s.emplace(left->right);
            s.emplace(right->left);
        }
        
        return true;
    }
};
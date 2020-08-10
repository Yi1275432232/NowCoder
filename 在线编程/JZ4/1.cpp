/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> vin) {
        if (pre.empty()) {
            return nullptr;
        }

        int root_val = pre[0];
        TreeNode *root = new TreeNode(root_val);

        if (pre.size() == 1) {
            return root;
        }

        int root_index = 0;

        for (int i = 0; i < vin.size(); i++) {
            if (vin[i] == root_val) {
                root_index = i;
                break;
            }
        }

        vector<int> left_pre;
        vector<int> left_vin;
        vector<int> right_pre;
        vector<int> right_vin;

        for (int m = 1; m < pre.size(); m++) {
            if (m <= root_index) {
                left_pre.emplace_back(pre[m]);
            } else {
                right_pre.emplace_back(pre[m]);
            }
        }

        for (int n = 0; n < vin.size(); n++) {
            if (n < root_index) {
                left_vin.emplace_back(vin[n]);
            }

            if (n > root_index) {
                right_vin.emplace_back(vin[n]);
            }
        }

        root->left = reConstructBinaryTree(left_pre, left_vin);
        root->right = reConstructBinaryTree(right_pre, right_vin);

        return root;
    }
};
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode *head) {
        vector<int> answer;
        helper(head, answer);

        return answer;
    }

private:
    void helper(ListNode *node, vector<int> &answer) {
        if (!node) {
            return;
        }

        helper(node->next, answer);
        answer.emplace_back(node->val);
    }
};
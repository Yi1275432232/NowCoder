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
        ListNode *node = head;

        while (node) {
            answer.emplace_back(node->val);
            node = node->next;
        }

        reverse(answer.begin(), answer.end());

        return answer;
    }
};
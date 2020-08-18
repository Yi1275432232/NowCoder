#include <unordered_set>

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode *EntryNodeOfLoop(ListNode *pHead) {
        if (!pHead) {
            return pHead;
        }

        unordered_set<ListNode *> node_set;
        ListNode *node = pHead;

        while (node) {
            if (node_set.find(node) != node_set.end()) {
                return node;
            }

            node_set.emplace(node);
            node = node->next;
        }

        return nullptr;
    }
};
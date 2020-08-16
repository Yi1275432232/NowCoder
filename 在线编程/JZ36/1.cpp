#include <unordered_set>

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode *FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
        unordered_set<int> val_recorder;

        ListNode *node1 = pHead1;
        ListNode *node2 = pHead2;

        while (node1) {
            val_recorder.emplace(node1->val);
            node1 = node1->next;
        }

        while (node2) {
            if (val_recorder.find(node2->val) != val_recorder.end()) {
                return node2;
            }

            node2 = node2->next;
        }

        return nullptr;
    }
};
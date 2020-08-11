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
    ListNode *FindKthToTail(ListNode *pListHead, unsigned int k) {
        ListNode *slow = pListHead;
        ListNode *fast = pListHead;

        unsigned int k_copy = k;
        unsigned int count = 0;

        while (fast) {
            fast = fast->next;
            count++;

            if (k < 1) {
                slow = slow->next;
            } else {
                k--;
            }
        }

        if (count < k_copy) {
            return nullptr;
        }

        return slow;
    }
};
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
    ListNode *Merge(ListNode *pHead1, ListNode *pHead2) {
        ListNode *head = new ListNode(-1);
        ListNode *node = head;

        while (pHead1 and pHead2) {
            if (pHead1->val < pHead2->val) {
                node->next = new ListNode(pHead1->val);
                pHead1 = pHead1->next;
            } else {
                node->next = new ListNode(pHead2->val);
                pHead2 = pHead2->next;
            }

            node = node->next;
        }

        while (pHead1) {
            node->next = new ListNode(pHead1->val);
            node = node->next;
            pHead1 = pHead1->next;
        }

        while (pHead2) {
            node->next = new ListNode(pHead2->val);
            node = node->next;
            pHead2 = pHead2->next;
        }

        return head->next;
    }
};
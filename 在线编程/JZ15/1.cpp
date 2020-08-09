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
    ListNode *ReverseList(ListNode *pHead) {
        ListNode *p1 = nullptr, *p2 = pHead;

        while (p2) {
            ListNode *temp = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = temp;
        }

        return p1;
    }
};
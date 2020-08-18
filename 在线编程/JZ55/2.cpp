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
        if (!pHead or !pHead->next) {
            return nullptr;
        }
        
        ListNode *p = pHead;
        ListNode *q = pHead;
        
        while (q and q->next) {
            p = p->next;
            q = q->next->next;
            
            if (p == q) {
                p = pHead;
                
                while (p != q) {
                    p = p->next;
                    q = q->next;
                }
                
                return p;
            }
        }
        
        return nullptr;
    }
};
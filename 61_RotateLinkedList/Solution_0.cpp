/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* h, int k) {
        if(!h || !k) return h;
        int cnt = 1;
        int len = 0;
        auto dh = new ListNode(-1, h);
        auto l = dh->next;
        while(l){
            len++;
            l = l->next;
        }
        l = dh;
        k = k % len;
        if(!k) return h;
        auto r = dh->next;
        while(cnt++ < k){
            r = r->next;
        }
        while(r->next){
            r = r->next;
            l = l->next;
        }
        auto toRot = l->next;
        l->next = nullptr;
        auto cur = dh;
        while(toRot){
            auto tmp = toRot->next;
            toRot->next = cur->next;
            cur->next = toRot;
            cur = cur->next;
            toRot = tmp;
        }

        return dh->next;
    }
};
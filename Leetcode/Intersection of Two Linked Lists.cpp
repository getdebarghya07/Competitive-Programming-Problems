/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt1,cnt2;
        cnt1=cnt2=0;
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        while(tempA != NULL || tempB != NULL){
            if(tempA!=NULL)cnt1++,tempA=tempA->next;
            if(tempB!=NULL)cnt2++, tempB=tempB->next;
        }
        int d = abs(cnt1-cnt2);
        //cout<<cnt1<<cnt2<<dis;
        ListNode *ans = new ListNode();
        if(d > 0){
            if(cnt1 > cnt2){
                while(d--){
                    headA = headA->next;
                }
                while(cnt2--){
                    if(headA==headB)return headA;
                    headA=headA->next;
                    headB=headB->next;
                }
            }
            else{
                while(d--){
                    headB = headB->next;
                }
                while(cnt2--){
                    if(headA==headB)return headA;
                    headA=headA->next;
                    headB=headB->next;
                }
            }
        }
        while(cnt2--){
            if(headA==headB)return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};
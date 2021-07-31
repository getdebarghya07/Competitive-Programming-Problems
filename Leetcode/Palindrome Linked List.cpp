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
    ListNode *reverseList(ListNode *head){
        ListNode *prev = NULL;
        ListNode *curr = head;

        while (curr != NULL)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next=NULL)return true;
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *dummy = head;
        
        while(fast->next->next==NULL && fast->next==NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        //reverse;
        slow->next = reverseList(slow->next);
        slow = slow->next;
        while(slow != NULL){
            if(dummy->val != slow->val)return false;
            dummy = dummy->next;
            slow = slow->next;
        }
        return true;
    }
};
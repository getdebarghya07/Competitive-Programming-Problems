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
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *pointer1 = head;
        ListNode *pointer2 = head;
        while (pointer2 != NULL && pointer2->next != NULL)
        {
            pointer1 = pointer1->next;
            pointer2 = pointer2->next->next;
        }
        return pointer1;
    }
};

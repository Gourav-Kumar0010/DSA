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
    ListNode* reverseList(ListNode* head) {

        // Reversing the node not only the element

        ListNode *curr,*prev,*fut;
        curr=head;
        fut=prev=NULL;

        while(curr)
        {
            fut=curr->next;  //to save the add of next node
            curr->next = prev ; //now curr is pointing to prev node and initially NULL
            prev=curr;      //Repeat
            curr=fut;
        }
        //Now while curr pooints to the NULL prev points to the last Node
        head=prev;

        return head;
        
    }
};
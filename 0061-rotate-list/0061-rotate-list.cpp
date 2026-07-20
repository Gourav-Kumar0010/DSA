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
    ListNode* rotateRight(ListNode* head, int k) {
        
        //Rotating list K times

        //Edge Case
        if(head==NULL || head->next ==NULL)
        return head;

        ListNode *curr=head,*prev,*tail;
        //counting the no of nodes
        int count = 0 ;
        while(curr)
        {
            count++;
            curr=curr->next;
        }
        //Actual rotation
        k=k%count;

        if(k==0)
        return head;    // if k==0 then no need to rotate the list

        // how many nodes would remain as it is
        count=count-k;  // iterate till this node
        curr=head;
        prev = NULL;
        while(count--)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL ; // because this will become the last node

        //Go till the last node of actual list to point it to the head
        tail = curr;
        while(tail->next !=NULL)
        {
            tail=tail->next;
        }
        // When tail is pointint to last node
        tail->next = head;
        //Now make the curr node as head node
        head=curr;

        return head;

    }
};
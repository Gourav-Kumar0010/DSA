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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Delete the nth node from end 


        ListNode *curr=head,*prev=NULL;
        //counting the total node
        int count = 0 ;
        while(curr)
        {
            count++;
            curr=curr->next;
        }
        count = count-n;
        // GO to node that would delete

        if(count==0)    // n=5 i.e, the first node
        {
            ListNode *temp=head;
            head=head->next;
            delete temp;
             return head;
        }

        //Re
        curr=head,prev=NULL;
        while(count--)
        {
            prev=curr;
            curr=curr->next;
        
        }
        // delete node after connecting
        prev->next=curr->next;
        delete curr;    // b/c curr is pointing to that node

        return head ;   //returning the list 
    }
};
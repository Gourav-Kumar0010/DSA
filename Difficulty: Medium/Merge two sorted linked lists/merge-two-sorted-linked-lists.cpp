/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) 
    {
        // code here
        //Dummy NOde
        Node *head,*tail;
        head= new Node(0);
        tail=head;
        
        Node *curr1,*curr2;
        curr1=head1;
        curr2=head2;   
        
        while(curr1 && curr2)
        {
            if(curr1->data <= curr2->data)
            {
                tail->next=curr1;
                tail=tail->next;
                curr1=curr1->next;
                tail->next=NULL;
            }
            else
            {
                tail->next=curr2;
                tail=tail->next;
                curr2=curr2->next;
                tail->next=NULL;
            }
        }
        //if elements left in curr1
        if(curr1)
        tail->next=curr1;
        else                // if curr2 exist 
        tail->next=curr2;
        
        
        return head->next;
        
    }
};
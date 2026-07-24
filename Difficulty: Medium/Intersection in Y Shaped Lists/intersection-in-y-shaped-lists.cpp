/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        // Approach count the nodes of both LL : ahead pointer to start from same
        
        Node *curr1=head1;
        Node *curr2 = head2;
        
        int count1=0;
        int count2=0;
        
        while(curr1)
        {
            count1++;
            curr1=curr1->next;
        }
        while(curr2)
        {
            count2++;
            curr2=curr2->next;
        }
        
        // back to head
        curr1=head1;
        curr2=head2;
        while(count1>count2)
        {
            count1--;
            curr1=curr1->next;
        }
        while(count2>count1)
        {
            count2--;
            curr2=curr2->next;
        }
        
        while(curr1!=curr2)
        {
            curr1=curr1->next;
            curr2=curr2->next;
        }
    
        //both pointer are at same node return any one
        // Edge case : if both are different linked list then 
        
        return curr1 ;     // data is 
    }
};
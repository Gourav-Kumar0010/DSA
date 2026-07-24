/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
  
  Node* reverse(Node *curr,Node *prev )
  {
      if(!curr)
      return prev;
      
      Node *fut=curr->next;
      curr->next=prev;
      
      return reverse(fut,curr);
      
  }
  
  
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        // Approach : reverse - add with carry -reverse
        
        Node *curr1,*first ;
        Node *curr2,*second ;
        
        first= reverse(head1,NULL); //initially prev is NULL for first node
        second= reverse(head2,NULL);
        
        // Now adding  
        curr1=first;
        curr2=second;
        Node *head=new Node(0); // Dummy NOde
        Node *tail=head;
        int sum=0,carry=0;  //sum=o for 0 input in firse
        
        while(curr1 && curr2)
        {
            sum= curr1->data + curr2->data +carry;
            tail->next=new Node(sum%10);
            tail=tail->next;
            curr1=curr1->next;
            curr2=curr2->next;
            carry=sum/10;
        }
        
        while(curr1)
        {
            sum=curr1->data +carry;
            tail->next = new Node(sum%10);
            tail=tail->next;
            curr1=curr1->next;
            carry=sum/10;
        }
        while(curr2)
        {
            sum=curr2->data +carry;
            tail->next = new Node(sum%10);
            tail=tail->next;
            curr2=curr2->next;
            carry=sum/10;
        }
        
        // when carry exist
        while(carry)
        {
            tail->next = new Node(carry%10);
            tail=tail->next;
            carry=carry/10;
        }
        
        // calling reverse function
        
        head= reverse(head->next , NULL);    // removed dummy node
        
        //remove the leading zero 
        while(head && head->data==0 && head->next )
        {
            head=head->next;
        }
        return head;
    }
};
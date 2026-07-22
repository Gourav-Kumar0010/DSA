/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here 
        //Edge Case : if no of node is 1
        if(head->next==NULL)
        return head;        // no duplicate can present
        
        // Taking two pointer approach
        Node *prev,*curr;
        prev=head;
        curr=head->next;
        
        while(curr!=NULL)
        {
            if(curr->data==prev->data)
            {
                //delete the curr node
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }
            else    //if not equal
            {
                prev=curr;
                curr=curr->next;
            }
        }
        
        return head;
    }
};
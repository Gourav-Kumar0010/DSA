/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        
        //Approach :At first detect and remove the loop
        
        //Detecting loop
        Node *slow=head;
        Node *fast=head;
        
        while(fast && fast->next)   // if no loop then also break
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            break;  //means if loop found then break
        }
        
        // We have two conditions so check any one 
        if(fast ==NULL || fast->next==NULL)
        return ;  // means loop not exist
        
        //IF loop exist : condition break due to pointer slow and fast
        //Remove loop
        slow=head;
        
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        while(slow->next!=fast)
        {
            slow=slow->next;
        }
        slow->next=NULL;
    }
};
/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        
        // Approach : slow and fast pointer
        
        Node *slow= head;
        Node *fast=head;
        
        while(fast && fast->next)       // first write fast then fast->next else seg fault
        {
            // first move then check b/c initially both pointing to head
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            return true;
        }
        
        //If loop exit : means anyone got null -so loop don't exist
        return false;
        
    }
};
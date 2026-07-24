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
    int lengthOfLoop(Node *head) {
        // code here
        
        // Approach : at first detect the loop then find length
        
        //Detecting loop
        Node *slow=head;
        Node *fast=head;
        
        while(fast && fast->next)
        {
            slow =slow->next;
            fast = fast->next->next;
            
            if(slow==fast)
            break;
        }
        //Loop exit : because of 2 conditions either due to fast or due to loop exist
        if(fast ==NULL || fast->next ==NULL)
        return 0 ; // loop doesnot exist
        
        //if Due to loop exist
        
        // counting nodes : both fast & slow is pointing to same node of any loop
        slow=slow->next;
        int count =1;
        while(slow!=fast)
        {
            slow=slow->next;
            count++;
        }
        
        return count;
    }
};
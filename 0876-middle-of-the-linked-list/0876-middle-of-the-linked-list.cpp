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
    ListNode* middleNode(ListNode* head) {
        
        // Another Method
        // Using the slow and fast pointer

        ListNode *slow,*fast;
        slow=fast=head;

        while( fast !=NULL && fast->next !=NULL )   //condition evaluation is from left to right is done in C++
        {
            slow=slow->next;
            fast=fast->next->next ;      //double speed 
        }
        return slow;    // now slow points to the middle node of linked list
    }
};
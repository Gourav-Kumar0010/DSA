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
        
        ListNode *temp;
        temp=head;

        //counting the nodes
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        //iterate till count/2
        count=count/2;
        temp=head;  // temp points to head
        while(count)
        {
            temp=temp->next;
            count--;
        }
        //Now temp pointing to the actual mid node
        return temp;
    }
};
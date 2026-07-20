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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        return head;

        ListNode *curr;
        curr = head ;
        vector<int> arr ;

        while(curr!=NULL)
        {
            arr.push_back(curr->val);
            curr=curr->next;
        }
        //vector me sara value aa gya 
        curr = head;
        int i = arr.size()-1; //last ko point kar rha h 
        while(i>=0)
        {
            curr->val=arr[i];
            curr=curr->next;
            i--;
        }
        return head;
    }
};
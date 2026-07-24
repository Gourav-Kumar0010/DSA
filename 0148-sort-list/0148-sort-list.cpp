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
    ListNode* sortList(ListNode* head) {
        
        vector<int> arr;

        ListNode *curr;
        curr=head;

        while(curr)
        {
            arr.push_back(curr->val);
            curr=curr->next;
        }
        // All elements are in the vector , Sort the vector
        sort(arr.begin(),arr.end());

        //Now put again in linked list
        int i = 0 ; 
        curr=head;
        while(i<arr.size())
        {
            curr->val = arr[i];
            i++;
            curr=curr->next;
        }

        //returning the head of linked list
        return head;
    }
};
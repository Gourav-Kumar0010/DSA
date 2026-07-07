class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>num; // ye sab basic aana chahiye tumko 
        int size = nums.size();
        for(int i = 0 ; i<size-1 ; i++)
        {
            for(int k=i+1 ; k<size ; k++)
            {
                if(nums[i]+nums[k]==target)
                {
               
                return {i,k};
                }
               
            }
        }
     return {};
    }
     // Link to Github   
    
};
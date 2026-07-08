class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        // Check by converting in binary form till 1

        if(n<1)
        return 0 ;
        
        while(n!=1)
        {
            int rem  = n%2 ;
            if(rem==1)
            return false;   //not power of 2

            n=n/2;
        }
        return 1;   // if all rem are 0 till quo=1 then its power of 2
    }
};
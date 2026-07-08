class Solution {
public:
    int findComplement(int num) {
        
        // EDGE CASE
        if(num ==0)
        return 1 ; 

        // First convert in binary--> change bit --> convert to integer

        int long mul = 1 , ans = 0 ; 
        while(num)
        {
            int rem = num%2 ;       // remainder
            rem = rem^1;            // bit changed
            ans =  rem*mul +ans ;   // converting in decimal again
            mul = mul*2;            // update the mul 
            num = num /2 ;          // updating number
        }

        return ans;
    }
};
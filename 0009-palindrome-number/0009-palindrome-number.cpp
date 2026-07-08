class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
        return 0 ;

        int num = x ;

        //Reverse the x
        int ans = 0 ; 
        while(num)
        {
            int rem = num%10 ; 

            if(ans>INT_MAX/10 || (ans==INT_MAX/10 && rem >7))
            return 0 ;
            if(ans<INT_MIN/10 || (ans==INT_MIN/10 && rem <-8))
            return 0 ;
            ans = ans*10 +rem ;
            num=num/10;
        }
        // check original and reverse no
        if(x==ans)
        return true;
        else
        return false ;
    }
};
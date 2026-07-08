class Solution {
public:
    int reverse(int x) 
    {
        int ans = 0 ;
       while(x)
       {
            int rem = x%10 ;

            //HANDLING +VE OVERFLOW
            if(ans>INT_MAX/10 || (ans == INT_MIN/10 && rem > 7))
            return 0;

            //HANDLLING -VE OVERFLOW
            if(ans<INT_MIN/10 || (ans==INT_MIN/10 && rem<-8))
            return 0 ; 

            // IF NO OVERFLOW THEN THIS WILL EXECUTE
            ans = ans*10 +rem ;
            x=x/10;
       }

       return ans;
    }
};\

//======================
// HANDLE EDGE CASE OVERFLOW
//======================
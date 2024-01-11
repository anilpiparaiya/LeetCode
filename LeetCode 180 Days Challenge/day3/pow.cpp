class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
    int num=n;
        n=abs(n);
            while(n>0)
            {
                if(n&1)
                    ans=ans*x;
               n=n>>1;
              
              x=x*x;
            }
       if(num>=0)
       {  
        return ans;
       }else{
          return 1/ans;
       }
    
    }
};

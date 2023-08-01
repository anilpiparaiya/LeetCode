class Solution {
public:
 double solve(double x,int n){
     if(n==0){
         return 1;
     }

     double temp = myPow(x, n/2);
     temp = temp * temp;


     if(n % 2 == 0){
         return temp; // if power is even
     }

     else{
         return x*temp; // if power is odd
     }
       
    }
    double myPow(double x, int n) {
        double result = solve(x,abs(n));
        if(n<0){
            return 1/result;
        }

        return result;
        
       
    }
};

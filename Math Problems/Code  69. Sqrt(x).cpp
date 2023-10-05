class Solution {
public:
    int mySqrt(int x) {
        // brute force
        
        // long long  y = 0;
        //  while(y*y <= x) y++;
        //  return y-1;
        
        
        // optimized approach
        long long s = 0 , e = INT_MAX , ans = 0;;
        while(s <= e){
            long long m = s + (e -s) / 2;
            if(m * m <= x){
                ans = m;
                s = m + 1;
            }
            else{
                e = m -1;
            }
            
           
        }
         return ans;
    }
};

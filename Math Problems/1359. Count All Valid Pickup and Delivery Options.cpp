class Solution {
public:
    int MOD = 1e9 + 7;
    int countOrders(int n) {
        long places = 2*n;
        long seq = 1;
        for(int i=n; i>=1; i--){
            seq = (seq*((places*(places-1)))/2) % MOD;
            places = places -2;

        }
        return (int)seq;
        
    }
};

// Solution 2

class Solution {
public:
    int countOrders(int n) {
        long res = 1, mod = 1000000007;
        for(int i = 1; i <=n; ++i)
        {
			// calulating n!
            res *= i;
			// to avoid overflow
            res %= mod;
			
			// (2*i-1) are the vacant places which we can choose
			// later we have n! permutation of pickup task
			// therefore we have to multiply with n! that we calculated as res.
            res *= (2*i-1);
			
			// to avoid overflow
            res %= mod;
        }
        
		// to avoid overflow
        return res % mod;
    }
};

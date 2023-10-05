class Solution {
public:
    int addDigits(int num) {

        while(num > 9){
            int ans = 0;
            while(num !=0){
                int rem = num%10;
                num /= 10;
                ans += rem;
            }

            num = ans;

        }

        return num;
    
    
    }
};


// Solution 2

class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        else if(num % 9 == 0) return 9;
        else return num % 9;
    }
};

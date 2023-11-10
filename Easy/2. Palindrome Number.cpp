class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        long long reversed = 0;
        long long temp = x;

        while(temp != 0){
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return reversed == x;
        
    }
};

// Solution 2

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }

        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return (x == reversed) || (x == reversed / 10);
    }
};

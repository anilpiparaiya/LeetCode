// Solution 1
class Solution {
public:
    bool isHappy(int n) {
        set<int> myset;
        int val;
        int index;
        
        while(1){
            val =0;
            while(n){
                index = n%10;
                val += index*index;
                n/=10;
            }
            if(val==1)
                return true;
            else if(myset.find(val)!= myset.end())
                return false;
            
            
            myset.insert(val);
            n = val;
        }
        return false;
        
    }
};

// Solution 2
class Solution {
public:
    int nextNumber(int n){
        int newNumber = 0;
        while(n!=0){
            int num = n%10;
            newNumber += num*num;
            n = n/10;
        }
        return newNumber;
    }
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n != 1 && !set.count(n)){
            set.insert(n);
            n = nextNumber(n);
        }

        return n == 1;
    }
};


// Solution 3
class Solution {
public:
    int nextNumber(int n){
        int newNumber = 0;
        while(n!=0){
            int num = n%10;
            newNumber += num*num;
            n = n/10;
        }
        return newNumber;
    }
    bool isHappy(int n) {
        int slowPointer = n;
        int fastPointer = nextNumber(n);
        while(fastPointer != 1 && fastPointer != slowPointer){
            slowPointer = nextNumber(slowPointer);
            fastPointer = nextNumber(nextNumber(fastPointer));
        }

        return fastPointer == 1;
    }
};

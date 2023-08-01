// Solution 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<=n; i++){
            int flag = 0;
            
            for(int j=0; j<n; j++){
                if(nums[j] == i){
                    flag = 1;
                    break;
                }
            }

            if(flag==0){
                return i;
            }
        }
        return -1;
    }
};


// Solution 2

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;

        int arrSum = 0;

        for(int i=0; i<n; i++){
            arrSum += nums[i];
        }

        int ans = sum - arrSum;

        return ans;
        
    }
};


// Solution 3

class Solution {
public:
    int missingNumber(vector<int>& nums) { 
        int result = nums.size(); // initialize result to size of vector
        int i=0; // initialize i to 0
        for(int num:nums){ // for each number in vector
            result ^= num; // XOR result with number
            result ^= i; // XOR result with i
            i++; // increment i
        }
        return result; // return result that is the missing number
    }
};

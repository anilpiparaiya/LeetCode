class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(); // size of nums array

        int maxItr = 0; // Initializaton for maximum iteration of 1
        int count = 0;

        for(int i=0; i<n; i++){

            if(nums[i] == 1){
                count++;
                maxItr = max(count, maxItr); // max of count and maxItr
            }

           else{
               count = 0;
           }
            
        }

        return maxItr;
        
    }
};

// Brute force solution gives TLE

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int sum = 0;

                for(int k = i;  k <= j; k++){
                    sum += nums[k];
                }

                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
        
    }
};


// Better solution it also gives TLE

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;

        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = i; j<n; j++){

                sum += nums[j];

                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
        
    }
};

// Optimal solution using Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;

        for(auto it: nums){
            sum += it;
            maxSum = max(maxSum, sum);
            
            if(sum < 0) sum = 0;

        }


        return maxSum;


        
    }
};

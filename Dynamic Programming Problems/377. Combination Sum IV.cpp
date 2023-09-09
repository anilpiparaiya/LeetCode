class Solution {
    public:
        int combinationSum4(vector<int>&nums, int target){
            vector<unsigned int> dp(target+1, 0);
            dp[0] = 1;

            for(int i=1; i<= target; i++){
                for(int num: nums){
                    if(i - num >= 0){
                        dp[i] += dp[i - num];
                    }
                }
            }

            return dp[target];
        }
        
};

// Solution 2

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> memo;
        
        return helper(target, nums, memo);
    }
    
    int helper(int n, const vector<int>& nums, unordered_map<int, int>& memo){
        if (memo.find(n) != memo.end()) {
            return memo[n];
        }
        
        if (n == 0) {
            return 1;
        }
        
        if (n < nums[0]) {
            return 0;
        }
        
        int count = 0;
        for (int num : nums) {
            if (n - num < 0) {
                break;
            }
            count += helper(n - num, nums, memo);
        }
        
        memo[n] = count;
        return count;
    }
};

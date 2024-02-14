class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int positiveIndex = 0, negativeIndex = 1;
        vector<int> ans(n, 0);
        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                ans[negativeIndex] = nums[i];
                negativeIndex += 2;
            }
            else{
                ans[positiveIndex] = nums[i];
                positiveIndex += 2;
            }
        }
        return ans;
    }
};

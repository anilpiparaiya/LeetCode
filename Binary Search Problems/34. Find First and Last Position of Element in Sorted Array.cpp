class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startIndex = -1, endIndex = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                startIndex = i;
                break;
            }
        }


        for(int i = n-1; i>=0; i--){
            if(nums[i] == target){
                endIndex = i;
                break;
            }
        }


        return {startIndex, endIndex};
        
    }
};

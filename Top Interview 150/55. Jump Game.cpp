class Solution {
public:
    bool canJump(vector<int>& nums) {
        int finalPosition = nums.size() - 1;

        for(int i= nums.size()-2; i>=0; i--){
            if(i + nums[i] >= finalPosition){
                finalPosition = i;
            }
        }

        return finalPosition == 0;
        
    }
};
